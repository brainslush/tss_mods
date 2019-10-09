@echo off
setlocal enabledelayedexpansion

if not exist "@tss_mods" mkdir "@tss_mods"
if not exist "@tss_mods\addons" mkdir "@tss_mods\addons"

if "%PROCESSOR_ARCHITECTURE%"=="AMD64" (set armake=tools\armake_w64.exe) else (set armake=tools\armake_w32.exe)

for /d %%f in (addons\*) do (
    set folder=%%f
    set name=!folder:addons\=!
    echo   PBO  @tss_mods\addons\tss_mods_!name!.pbo
    !armake! build -i include -w redefinition-wo-undef -w unquoted-string -w excessive-concatenation -f !folder! @TSS_UNITS\addons\tss_units_!name!.pbo
)

pause
