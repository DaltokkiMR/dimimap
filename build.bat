@echo off
chcp 65001 > nul

gcc -Wall -Wextra -std=c11 ^
  -finput-charset=UTF-8 ^
  -fexec-charset=UTF-8 ^
  main.c ^
  showmap/show_map.c ^
  showmap/bonguan/bonguan.c ^
  showmap/others/others.c ^
  findteacher/find_teacher.c ^
  findpos/find_pos.c ^
  -o dimimap.exe

if errorlevel 1 (
  echo Build failed.
  pause
  exit /b 1
)

echo Build complete: dimimap.exe
