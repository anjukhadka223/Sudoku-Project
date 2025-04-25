/**
 * @file sudoku_io.h
 * @brief Input/Output utility functions for handling Sudoku puzzles.
 *
 * This header file declares functions for reading, writing, displaying,
 * and managing Sudoku puzzles. It includes utilities to:
 * - Print Sudoku boards to the console with color-coded hints.
 * - Read and write Sudoku puzzles from/to files.
 * - Parse and extract numbers from text representations.
 * - Generate and solve multiple Sudoku puzzles.
 * - Handle file system operations to read puzzle sets from directories.
 * - Compare performance of solvers.
 *
 * The functions work with a dynamically allocated 9x9 Sudoku board
 * represented as `int**`, where empty cells are denoted by 0.
 *
 * @author
 * Keshav Bhandari
 *
 * @date
 * February 7, 2025
 */

 #ifndef SUDOKUPROJECT_SUDOKUIO_H
 #define SUDOKUPROJECT_SUDOKUIO_H
 
 #include <vector>
 #include <string>
 
 using namespace std;
 
 /**
  * @brief Prints the Sudoku board to the console with highlighting.
  *
  * Displays the Sudoku board with color-coded hints. If a position `(r, c)`
  * and a candidate `k` are provided, the cell will be highlighted:
  * - Green if placing `k` is valid.
  * - Red if placing `k` violates Sudoku rules.
  * - Yellow for empty cells.
  *
  * @param BOARD A pointer to the 2D Sudoku board (int**).
  * @param r Row index for the candidate (default: 0).
  * @param c Column index for the candidate (default: 0).
  * @param k Candidate number to test (default: 0).
  * @param color Whether to use terminal coloring (default: false).
  */
 void printBoard(int** BOARD, const int& r = 0, const int& c = 0, int k = 0, const bool& color = false);
 
 /**
  * @brief Converts the Sudoku board into a string representation.
  * 
  * Empty cells are represented as '-' and visual separators are included.
  * 
  * @param BOARD Pointer to 2D board.
  * @param content String to store the formatted board.
  */
 void boardToString(int** BOARD, string& content);
 
 /**
  * @brief Writes the Sudoku board to a text file.
  * 
  * @param BOARD Pointer to 2D board.
  * @param filename Output file path.
  * @return true if successful, false otherwise.
  */
 bool writeSudokuToFile(int** BOARD, const string& filename);
 
 /**
  * @brief Replaces all instances of a character in a string.
  * 
  * @param str String to modify.
  * @param oldChar Character to replace.
  * @param newChar Replacement character.
  */
 void replaceCharacter(string& str, char oldChar, char newChar);
 
 /**
  * @brief Extracts all integers from a given string.
  * 
  * @param input Input string.
  * @param numbers Vector to store extracted integers.
  */
 void extractNumbers(const string& input, vector<int>& numbers);
 
 /**
  * @brief Fills a 9x9 Sudoku board using values from a vector.
  * 
  * Assumes vector has at least 81 integers.
  * 
  * @param numbers Source vector.
  * @param BOARD Destination 2D board pointer.
  */
 void fillBoard(const vector<int>& numbers, int** BOARD);
 
 /**
  * @brief Reads and parses a Sudoku puzzle from a file.
  * 
  * @param filename Path to file.
  * @return Dynamically allocated 9x9 board.
  */
 int** readSudokuFromFile(const string& filename);
 
 /**
  * @brief Validates a completed Sudoku board.
  * 
  * Checks that all Sudoku rules are met.
  * 
  * @param BOARD Board to validate.
  * @return true if valid, false otherwise.
  */
 bool checkIfSolutionIsValid(int** BOARD);
 
 /**
  * @brief Lists all puzzle files in a directory.
  * 
  * @param folderPath Folder containing puzzles.
  * @return Vector of puzzle file paths.
  */
 vector<string> getAllSudokuInFolder(const string& folderPath);
 
 /**
  * @brief Creates and saves multiple new Sudoku puzzles.
  * 
  * @param num_puzzles How many puzzles to generate.
  * @param complexity_empty_boxes How many empty cells per puzzle.
  * @param destination Output directory.
  * @param prefix Filename prefix.
  */
 void createAndSaveNPuzzles(const int& num_puzzles, const int& complexity_empty_boxes, const string& destination, const string& prefix);
 
 /**
  * @brief Solves multiple puzzles and saves the solutions.
  * 
  * @param num_puzzles Number of puzzles to process.
  * @param source Input folder.
  * @param destination Output folder.
  * @param prefix Solution filename prefix.
  */
 void solveAndSaveNPuzzles(const int& num_puzzles, const string& source, const string& destination, const string& prefix);
 
 /**
  * @brief Returns a deep copy of a 9x9 Sudoku board.
  * 
  * @param original Original board.
  * @return New copied board.
  */
 int** deepCopyBoard(int** original);
 
 /**
  * @brief Compares the performance of two Sudoku solving strategies.
  * 
  * @param experiment_size Number of runs to average.
  * @param empty_boxes Complexity (empty cells).
  */
 void compareSudokuSolvers(const int& experiment_size, const int& empty_boxes);
 
 #endif //SUDOKUPROJECT_SUDOKUIO_H
 