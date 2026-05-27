@echo off
cd /d "D:\ACE3 Arsenal Extended Compats\ACE3 Arsenal Extended - Global Mobilisation"
hemtt build
if errorlevel 1 exit /b %errorlevel%
call "%~dp0_sign.bat" build
