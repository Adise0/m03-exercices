@echo off
if not exist build mkdir build

setlocal enabledelayedexpansion
set FILES=
for /R src %%f in (*.cpp) do (
    set FILES=!FILES! "%%f"
)

cl.exe /Zi /EHsc /nologo /Fo"build\\objects" /Fd"build\\app.pdb" /Febuild\app.exe %FILES%
endlocal
