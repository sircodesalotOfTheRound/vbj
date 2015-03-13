call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\vcvarsall.bat" x86_amd64
call dir
call msbuild verbaj.sln
call cd bin
call dir
call cd Debug
call dir
call copy "C:\Jenkins\workspace\Verbaj Windows x64\bin\Debug\verbaj.exe" "C:\Jenkins\workspace\Verbaj Windows x64\bin\Debug\verbaj-x64-windows-1.0.0.exe"
