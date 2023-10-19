Dim objFSO, objFolder
Set objFSO = CreateObject("Scripting.FileSystemObject")
Set objFolder = objFSO.GetFolder(".")

Dim objWsh
Set objWsh = CreateObject("WScript.Shell")
objWsh.Run objFolder.Path & "\tapleanhub-windows.bat", 0, False
Set objWsh = Nothing
