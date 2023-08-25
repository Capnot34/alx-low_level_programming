# Alx - 0x18. C - Dynamic libraries

# Dynamic Libraries in C
In this project, we explore the concept of dynamic libraries, their creation, and manipulation in the C programming language. We also delve into some advanced topics such as calling C functions from Python and the concept of code injection using the `LD_PRELOAD` trick.

## Table of Contents

- [Requirements](#requirements)
- [Tasks](#tasks)
- [Author](#author)
- [Tasks](#tasks)
  - [Task 0](#task-0)
  - [Task 1](#task-1)
  - [Task 2](#task-2)
  - [Task 3](#task-3)

## Requirements

- Editors allowed: `vi`, `vim`, `emacs`
- Code should conform to the `Betty` style.
- All files should end with a newline.
- No usage of global variables and the standard library. The usage of functions like `printf`, `puts`, etc. is forbidden.

## Tasks

### Task 0
Creation of a dynamic library named `libdynamic.so` comprising of essential C functions. If a function has not been coded, an empty version with the correct prototype should be created.

### Task 2
Experience inter-language operability by generating a dynamic library callable from a Python script. This task brings C's performance capabilities to Python.

### Task 3
Dive into the realm of code injection. Given a binary `gm`, the task requires code injection so that when the `gm` program runs with specific numbers, victory is guaranteed.
