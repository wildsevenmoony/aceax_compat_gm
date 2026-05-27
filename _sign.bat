@echo off
setlocal EnableExtensions

set "MODE=%~1"
if "%MODE%"=="" set "MODE=build"

set "ROOT=%~dp0"
set "DSSIGN=D:\Steam\steamapps\common\Arma 3 Tools\DSSignFile\DSSignFile.exe"
set "PRIVATE_KEY=D:\ACE3 Arsenal Extended Compats\Private Keys\aceax_compat_gm.biprivatekey"
set "PUBLIC_KEY=D:\ACE3 Arsenal Extended Compats\Private Keys\aceax_compat_gm.bikey"
set "PBO=aceax_gm.pbo"
set "AUTHORITY=aceax_compat_gm"
call :ReadVersion
if errorlevel 1 exit /b %errorlevel%

if /I "%MODE%"=="release" (
    set "OUT=%ROOT%.hemttout\release"
) else (
    set "OUT=%ROOT%.hemttout\build"
)

set "ADDONS=%OUT%\addons"
set "KEYS=%OUT%\keys"

if not exist "%ADDONS%\%PBO%" (
    echo Missing PBO: "%ADDONS%\%PBO%"
    exit /b 1
)

del /q "%ADDONS%\%PBO%.*.bisign" 2>nul
"%DSSIGN%" "%PRIVATE_KEY%" "%ADDONS%\%PBO%"
if errorlevel 1 exit /b %errorlevel%

if exist "%ADDONS%\%PBO%.%AUTHORITY%.bisign" (
    ren "%ADDONS%\%PBO%.%AUTHORITY%.bisign" "%PBO%.%AUTHORITY%_%VERSION%.bisign"
)

if not exist "%KEYS%" mkdir "%KEYS%"
del /q "%KEYS%\*.bikey" 2>nul
copy /y "%PUBLIC_KEY%" "%KEYS%\%AUTHORITY%.bikey" >nul

echo Signed %PBO% with %AUTHORITY%_%VERSION%.

if /I "%MODE%"=="release" (
    powershell -NoProfile -ExecutionPolicy Bypass -File "%ROOT%_refresh_release_zip.ps1" -ReleaseVersion "%RELEASE_VERSION%"
    if errorlevel 1 exit /b %errorlevel%
)
exit /b 0

:ReadVersion
for /f "usebackq delims=" %%v in (`powershell -NoProfile -ExecutionPolicy Bypass -Command "$p = Join-Path $env:ROOT '.hemtt\project.toml'; $vals = @{}; $inside = $false; foreach ($line in Get-Content -LiteralPath $p) { $t = $line.Trim(); if ($t -eq '[version]') { $inside = $true; continue }; if ($inside -and $t -match '^\[') { break }; if ($inside -and $t -match '^(major|minor|patch|build)\s*=\s*(\d+)') { $vals[$matches[1]] = $matches[2] } }; foreach ($k in 'major','minor','patch','build') { if (-not $vals.ContainsKey($k)) { $vals[$k] = 0 } }; '{0}.{1}.{2}.{3}' -f $vals.major,$vals.minor,$vals.patch,$vals.build"`) do set "VERSION=%%v"
for /f "tokens=1-3 delims=." %%a in ("%VERSION%") do set "RELEASE_VERSION=%%a.%%b.%%c"
if "%VERSION%"=="" (
    echo Failed to read version from "%ROOT%.hemtt\project.toml"
    exit /b 1
)
exit /b 0