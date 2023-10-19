@echo off

set arquivo=start_taphub.vbs
set dir=%~dp0

echo Dim objWsh > %arquivo%
echo Set objWsh = CreateObject("WScript.Shell") >> %arquivo%
echo objWsh.Run "%dir%tapleanhub-windows.bat %dir%", 0, False >> %arquivo%
echo Set objWsh = Nothing >> %arquivo%
