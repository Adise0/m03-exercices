@echo off

set /p EXERCISE_NUMBER="Enter exercise number (e.g., 01): "

if "%EXERCISE_NUMBER%"=="" (
    echo No EXERCISE_NUMBER provided. Exiting.
    exit /b 1
)
if exist e%EXERCISE_NUMBER% (
    echo Exercise e%EXERCISE_NUMBER% already exists.
    exit /b 1
)


mkdir e%EXERCISE_NUMBER%

copy template\e00.cpp e%EXERCISE_NUMBER%\e%EXERCISE_NUMBER%.cpp /Y
copy template\e00.h e%EXERCISE_NUMBER%\e%EXERCISE_NUMBER%.h /Y

for %%f in (e%EXERCISE_NUMBER%\*) do (
    powershell -Command "(Get-Content '%%f') -replace '00','%EXERCISE_NUMBER%' | Set-Content '%%f'"
)





set OUTPUT=exercises.cpp
set EXERCISE_NAME=e%EXERCISE_NUMBER%
set INCLUDE_LINE=#include "./%EXERCISE_NAME%/%EXERCISE_NAME%.h"
set REGISTER_LINE=REGISTER_EXERCISE(%EXERCISE_NAME%);


if not exist "%OUTPUT%" (
    echo // This file is auto-generated. Do not edit manually. > "%OUTPUT%"
    echo #include "../main.h" >> "%OUTPUT%"
    echo. >> "%OUTPUT%"
    echo using namespace Exercices; >> "%OUTPUT%"
    echo. >> "%OUTPUT%"
    echo // Includes >> "%OUTPUT%"
    echo // Registration >> "%OUTPUT%"
)


node includeExercise.js %EXERCISE_NUMBER%


echo REGISTER_EXERCISE(E%EXERCISE_NUMBER%); >> "%OUTPUT%"

if errorlevel 1 (
   rm -r e%EXERCISE_NUMBER%
   echo Failed, removing e%EXERCISE_NUMBER% folder.
   exit
) 

echo Exercise e%EXERCISE_NUMBER% created successfully.


