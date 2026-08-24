# Skeleton Repo for 16-bit DOS Projects with VSCode

This repo provides a VSCode-based integrated development environment (IDE) for developing 16-bit DOS projects using Windows. Fork the repo in order to do some 16-bit DOS hacking!

## Instructions

- Use VSCode to write the DOS code in the src/ directory.
- Run the project from within VSCode with CTRL-SHFT-B.
- VSCode uses OpenWatCom to compile the code, then runs the resulting executable with DosBox-X.
- DosBox-X will close automatically when the executable exits.

## Requirements

The IDE requires the following tools to be installed.

- C/C++ marketplace extensions for VSCode
- [Open WatCOM v2](https://github.com/open-watcom/open-watcom-v2/releases) cross-compiler for DOS targets. Grab the current-build release for your platform (e.g. open-watcom-2_0-c-win-x64.exe).
- [DosBox-X](https://dosbox-x.com/) DOS emulator. Grab the Win7+ release.
