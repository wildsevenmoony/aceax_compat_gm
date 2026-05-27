param(
    [Parameter(Mandatory = $true)]
    [string]$ReleaseVersion
)

$ErrorActionPreference = "Stop"

$source = Join-Path $PSScriptRoot ".hemttout\release"
$stageRoot = Join-Path $PSScriptRoot ".hemttout\release_zip"
$stage = Join-Path $stageRoot "@aceax"
$releaseDir = Join-Path $PSScriptRoot "releases"

Remove-Item -LiteralPath $stageRoot -Recurse -Force -ErrorAction SilentlyContinue
New-Item -ItemType Directory -Path $stage -Force | Out-Null
Copy-Item -Path (Join-Path $source "*") -Destination $stage -Recurse -Force
New-Item -ItemType Directory -Path $releaseDir -Force | Out-Null

Compress-Archive -Path $stage -DestinationPath (Join-Path $releaseDir "aceax-latest.zip") -Force
Compress-Archive -Path $stage -DestinationPath (Join-Path $releaseDir "aceax-$ReleaseVersion.zip") -Force

Write-Host "Refreshed release zips with local signatures."
