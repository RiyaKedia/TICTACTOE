# Tic-Tac-Toe Game in C

## 1. Objective
The objective of this project is to create a console-based Tic-Tac-Toe game for two players using the C programming language. This project demonstrates:

- Modular programming using multiple `.c` and `.h` files.
- Use of arrays for board representation.
- Handling user input and validation.
- Game logic implementation for win/draw detection.

## 2. Project Description
This project implements a two-player Tic-Tac-Toe game with the following features:

- 3x3 board displayed in the console.
- Players take turns marking their positions (`X` for Player 1, `O` for Player 2).
- Input validation to prevent invalid or occupied moves.
- Detects **winner** or **draw**.
- Modular code structure:
  - `board.c` / `board.h` → handles board initialization and display.
  - `game.c` / `game.h` → contains game logic (check winner/draw).
  - `main.c` → contains the main game loop.

## 3. Folder Structure
TicTacToe/
|-- src/
| |-- main.c // Main game loop
| |-- board.c // Board functions
| |-- game.c // Game logic functions
|-- include/
| |-- board.h // Board header
| |-- game.h // Game logic header
|-- docs/
| |-- report.md // Project report
|-- README.md // Project description and instructions
|-- assets/ // Optional: screenshots, diagrams
|-- sample_input.txt // Optional: test inputs
## 4. How to Compile and Run
1. Open terminal/command prompt in the **project root**.
2. Compile all `.c` files together using GCC:

**Windows:**
```bash
gcc src/*.c -I include -o TicTacToe.exe
TicTacToe.exe