/**
* @file generator.h
 * @brief Function prototypes for generating random solvable Sudoku boards.
 *
 * This header defines functions to:
 * - Create empty Sudoku boards.
 * - Fill independent diagonal boxes.
 * - Solve and generate a complete Sudoku board.
 * - Randomly delete cells to create a solvable puzzle.
 * - Generate a complete Sudoku puzzle with a specific number of empty cells.
 *
 * Detailed function descriptions and parameters are provided below.
 *
 * @author
 * Keshav Bhandari
 *
 * @date
 * February 7, 2025
 */

#ifndef GENERATOR_H
#define GENERATOR_H

#include <vector>

 /**
  * @brief Generates a Sudoku puzzle with empty cells. 
  * 
  * This function dynamically allocates memory for a 9*9 board and 
  * fills every cell with 0.
  *
  *@return int** A pointer to the newly created 9*9 board filled with zeros.
  */
int** getEmptyBoard();

/**
  * @brief Returns a shuffled List of numbers 1 through 9. 
  *
  * Creates a list from 1 to 9 and shuffles the order randomly.
  * This is helpful when filling Sudoku boxes without repeating numbers.
  *
  */
std::vector<int> getShuffledVector();

/**
  * @brief Fills the three diagonal 3*3 boxes in the Sudoku board.
  *
  *These diagonal boxes (top-left, center, bottom-right) are filled
  *with random numbers from 1 to 9 using the shuffled vetor.
  * 
  *@param BOARD A pointer to the 9*9 Sudoku board.
  */
void fillBoardWithIndependentBox(int** BOARD);

/**
  * @brief Deletes random cells from a filled Sudoku board.
  *
  * This funciton randomly picks 'n' different cells and sets them to 0,
  *making them enpty. It avoids clearing the sane cell twice.
  *
  *@param BOARD A pointer to the 9*9 Sudoku board.
  *@param n The number of cells to clear. n should be between 1 to 81.
  */
void deleteRandomItems(int** BOARD, const int& n);

/**
  * @brief Creates a solvable Sudoku puzzle with a specific number of empty cells.
  *
  * This funciton creates an empty board, fills 3 diagonal boxes with random values
  * solves the whole board and deletes some cells to make a playable puzzle.
  *
  * @param empty_boxes How many cells should be left empty.
  * 
  * @return int** A pointer to the generated Sudoku board.
  */
int** generateBoard(const int& empty_boxes);

#endif // GENERATOR_H
