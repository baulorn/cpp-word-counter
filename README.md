# C++ Word Counter

A beginner-friendly C++ console application that counts words in a line of text.

## Features

- Reads a complete line, including spaces.
- Counts words separated by ordinary spaces.
- Handles multiple consecutive spaces.
- Returns `0` for an empty line or a line containing only spaces.

## Example

Input:
```text
Hello    world from C++
```

Output:
```text
4
```

## Build and run

Compile with GCC or MinGW:

```bash
g++ main.cpp -o word-counter.exe
```

Run in Windows PowerShell:

```powershell
.\word-counter.exe
```

## What I practiced

- `std::string` and `std::getline()`
- Accessing characters by index
- `while` loops and conditional statements
- `bool` state tracking
- Basic text-processing logic

## Current limitation

Words are separated by ordinary spaces. Tabs and punctuation are not treated as word separators.

---

This is one of my first C++ learning projects, built to practice programming fundamentals before moving on to more advanced string algorithms.
