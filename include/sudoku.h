/**
 * @file sudoku.h
 * @brief Core Sudoku solving and board generation functions.
 *
 * This header file declares functions essential for solving Sudoku puzzles
 * and validating board states. It includes:
 * - A backtracking Sudoku solver.
 * - A cell validation function to ensure valid number placement.
 * - A board generation stub for creating Sudoku puzzles.
 *
 * All functions operate on dynamically allocated 9x9 Sudoku boards
 * represented as `int**`, where empty cells are denoted by 0.
 *
 * @author
 * Keshav Bhandari
 *
 * @date
 * February 7, 2025
 */

#ifndef SUDOKUPROJECT_SUDOKU_H
#define SUDOKUPROJECT_SUDOKU_H

#include <iostream>

/**
  * @brief Checks if placing a number in a specific cell is valid.
  * 
  * This function checks the row, column, and 3*3 box to make sure the number
  * is not already used. It return true if the number can be placed false otherwise.
  *
  * @param BOARD A 9x9 Sudoku board (2D array) where 0 means an empty cell.
  * @param r The row number of the cell (0 to 8).
  * @param c The column number of the cell (0 to 8).
  * @param k The number you want to place (1 to 9).
  * @return true if placing the number is valid, false if it's not.
  */
bool isValid(int** BOARD, const int& r, const int& c, const int& k);

/**
* @brief Solves the Sudoku board using simple backtracking.
*
* This function fills the Sudoku board from top-left to bottom-right,
* trying numbers from 1 to 9 in empty cells. If it finds a valid number,
* it moves to the next cell. If stuck, it goes back (backtracks) and tries
* a different number.
*
* @param BOARD A 9x9 Sudoku board (2D array) with empty cells as 0.
* @param r The current row to start from (default is 0).
* @param c The current column to start from (default is 0).
* @return true if the board can be solved, false if not.
*/
bool solveBoard(int** BOARD, const int& r=0, const int& c=0);

// ========================= Efficient Solutions ==========================


/**
 * @brief Finds the best empty cell to fill next using MRV method.
 *
 * MRV stands for "Minimum Remaining Value." This function looks for the
 * empty cell that has the fewest valid options left. This helps make solving
 * faster by reducing the number of choices early on.
 *
 * @param BOARD A 9x9 Sudoku board (2D array).
 * @return A tuple with 3 values:
 *         - Row index of the best cell.
 *         - Column index of the best cell.
 *         - Number of valid numbers that can go in that cell.
 */
std::tuple<int, int, int> findNextCell(int** BOARD);


/**
 * @brief Solves the Sudoku board using backtracking with MRV optimization.
 *
 * This function is a smarter version of the normal solver. It uses MRV
 * (Minimum Remaining Value) to always choose the most constrained cell.
 * This usually makes the solution faster, especially for hard puzzles.
 *
 * @param BOARD A 9x9 Sudoku board (2D array) with empty cells as 0.
 * @return true if the board can be solved, false if not.
 */
bool solveBoardEfficient(int** BOARD);

/**
 * @brief Solves the Sudoku board using either basic or efficient method.
 *
 * This function lets you choose how to solve the board.
 * If you want speed and smart solving, set `efficient` to true.
 * If not, it will use the basic backtracking method.
 *
 * @param board A 9x9 Sudoku board (2D array) with 0 as empty cells.
 * @param efficient If true, use the optimized method; if false, use the simple one.
 * @return true if the board is solved, false if not.
 */
bool solve(int** board, const bool& efficient = false);

#endif //SUDOKUPROJECT_SUDOKU_H