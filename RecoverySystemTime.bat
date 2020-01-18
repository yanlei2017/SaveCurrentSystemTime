@echo off
set mypath=%~dp0
echo mypath is %mypath%
@ping 127.0.0.1 -n 1 >nul
call %mypath%\time.bat
@ping 127.0.0.1 -n 1 >nul
del %mypath%\time.bat
exit
