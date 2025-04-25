# Contributing Guidelines

Yay, we are working together! Please follow these guidelines to ensure smooth collaboration.

## Branch Policy

- ⛔ Never push directly to the `main` branch
- ✅ Create a new branch for each feature/fix
- 🔍 Review existing branches before starting work to avoid conflicts

## Commit Message Format

Use the following format for commit messages:

```
[type]: Short description
```

Where `type` can be:

- `feat` - New feature
- `fix` - Bug fix
- `docs` - Documentation changes
- `style` - Formatting, missing semicolons, etc.
- `refactor` - Code refactoring
- `test` - Adding tests
- `chore` - Maintenance tasks

Example:

```
[feat]: Added displayBoard feature
[fix]: Fixed cell validation logic
```

## Development Guidelines

1. **Task Assignment**

   - Only work on tasks assigned to you
   - Check Issues/Discussion tab for task assignments
   - Avoid modifying code in areas others are working on

2. **Code Documentation**

- Add Doxygen style comments for functions and classes
- Example:
  ```cpp
  /**
     * @brief Validates a Sudoku cell value
     *
     * @param value The value to validate
     * @param row Row position
     * @param col Column position
     * @return true if valid, false otherwise
     */
  bool validateCell(int value, int row, int col);
  ```

3. **Security & Build**

   - Never commit credentials or sensitive information
   - Do not push compiled files or build artifacts
   - Add sensitive files to .gitignore

4. **Code Style**

   - Use 4 spaces or 1 tab for indentation
   - Use descriptive variable names
   - Use capital letters for constants
   - Prefix pointers with `p` to the variable name
   - Use `nullptr` instead of `NULL` for pointer initialization
   - Use `auto` keyword for type inference where appropriate
   - Avoid using `using namespace` in header files
   - Place `#include` statements at the top of the file
   - Group related declarations together

## Pull Request Process

1. Ensure your branch is up to date with main
2. Test your changes thoroughly
3. Update documentation if necessary
4. Request review from team members
5. Address review comments if any

## Questions?

Feel free to open an issue for any questions or clarifications.
