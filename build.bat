@echo off
set LIBS=-lGoldHEN_Hook -lkernel -lSceLibcInternal
set CFLAGS=--target=x86_64-pc-freebsd12-elf -fPIC -I"%OO_PS4_TOOLCHAIN%\include" -I"%GOLDHEN_SDK%\include"
set LDFLAGS=-pie -e _init -script %OO_PS4_TOOLCHAIN%\link.x -L"%OO_PS4_TOOLCHAIN%\lib" -L"%GOLDHEN_SDK%\lib"
clang %CFLAGS% -c main.c -o main.o
ld.lld %LDFLAGS% %LIBS% main.o -o main.elf
create-fself -in=main.elf -out=main.oelf -lib=main.prx -paid 0x3800000000000011