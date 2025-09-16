@echo off

set /p number="Enter exercise number (e.g., 01): "

if "%number%"=="" (
    echo No number provided. Exiting.
    exit /b 1
)
if exist e%number% (
    echo Exercise e%number% already exists. Exiting.
    exit /b 1
)

mkdir e%number%

copy template\e00.cpp e%number%\e%number%.cpp /Y
copy template\e00.h e%number%\e%number%.h /Y

for %%f in (e%number%\*) do (
    powershell -Command "(Get-Content '%%f') -replace '00','%number%' | Set-Content '%%f'"
)


setlocal
set OUTPUT=exercises.h
if not exist "%OUTPUT%" (
    echo // This file is auto-generated. Do not edit manually. > "%OUTPUT%"
    echo #pragma once >> "%OUTPUT%"
    echo. >> "%OUTPUT%"
)

echo #include "e%number%\e%number%.h" >> "%OUTPUT%"

 echo Exercise e%number% created successfully.


