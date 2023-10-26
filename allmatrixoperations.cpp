#include <iostream>
#include <vector>

// Function to add two matrices
std::vector<std::vector<int>> matrixAddition(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int rows = A.size();
    int cols = A[0].size();
    std::vector<std::vector<int>> result(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    return result;
}

// Function to subtract two matrices
std::vector<std::vector<int>> matrixSubtraction(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int rows = A.size();
    int cols = A[0].size();
    std::vector<std::vector<int>> result(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
    return result;
}

// Function to multiply two matrices
std::vector<std::vector<int>> matrixMultiplication(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int rowsA = A.size();
    int colsA = A[0].size();
    int colsB = B[0].size();
    std::vector<std::vector<int>> result(rowsA, std::vector<int>(colsB, 0));

    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return result;
}

// Function to transpose a matrix
std::vector<std::vector<int>> matrixTranspose(const std::vector<std::vector<int>>& A) {
    int rows = A.size();
    int cols = A[0].size();
    std::vector<std::vector<int>> result(cols, std::vector<int>(rows));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = A[i][j];
        }
    }
    return result;
}

int main() {
    std::vector<std::vector<int>> A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::vector<std::vector<int>> B = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    // Matrix Addition
    std::vector<std::vector<int>> addResult = matrixAddition(A, B);

    // Matrix Subtraction
    std::vector<std::vector<int>> subResult = matrixSubtraction(A, B);

    // Matrix Multiplication
    std::vector<std::vector<int>> mulResult = matrixMultiplication(A, B);

    // Matrix Transposition
    std::vector<std::vector<int>> transposeResult = matrixTranspose(A);

    // Print results
    std::cout << "Matrix Addition Result:" << std::endl;
    for (const auto& row : addResult) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matrix Subtraction Result:" << std::endl;
    for (const auto& row : subResult) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matrix Multiplication Result:" << std::endl;
    for (const auto& row : mulResult) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matrix Transposition Result:" << std::endl;
    for (const auto& row : transposeResult) {
        for (int value : row) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
