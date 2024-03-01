# Reverse Engineering a Cryptic Executable
A project that myself and another team member, Joseph Zuniga, worked on. Involved removing malicious code from an unknown executable using Ghidra, an open source reverse engineering tool developed by the NSA. We then created two separate executables: one that implemented it's original purpose, and another implementing the "game" from the malware, without any of the harmful effects.

## IMPORTANT!
The original executables, a Windows and Mac version, are included in the `OriginalExecutable.zip` file. ***DO NOT OPEN THEM!*** they still contain malicious code, they are only there for anyone that would like to look at the executables within a decompiler and/or disassembler in a safe environment!

The executables that are contained in `NewExecutables.zip` are safe, and are simple programs that only read input / produce output from the command prompt. They are the two aforementioned executables, an assembly calculator and a bomb puzzle game.

`calculator.cpp` and `bombPuzzle.cpp` are the source files for the assembly calculator and bomb puzzle game, respectively.

## Answers to Bomb Game
Here are the answers to each level of the bomb puzzle (also included as .txt file):
- Level 1: "Penland"
- Level 2: 1 1 2 3 5 8 13 21 34 55
- Level 3: 106 113 120 101 108 115 122 103 110 117
- Level 4: Questions are randomly generated
- Level 5: Utilize the binary search algorithm
- Level 6: 1 through 100
