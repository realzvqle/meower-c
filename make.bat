@echo off


rem To Compile Open x64 Build Tools For Visual Studios 2022, and then run this make file
cl src/*.c /Fe:meower.exe
del *.obj
start meower.exe