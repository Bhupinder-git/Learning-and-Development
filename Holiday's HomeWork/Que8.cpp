#include <iostream>
using namespace std;

// Program to Addition,multiplication,Transpose Two Matrices.

void inputMatrix(int matrix[3][3], int rows, int cols) {
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int matrix[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Addition of two matrices
void addMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Multiplication of two matrices
void multiplyMatrices(int matrix1[3][3], int matrix2[3][3], int result[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Transpose of a matrix
void transposeMatrix(int matrix[3][3], int result[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];  // Rows become columns and vice versa
        }
    }
}

int main() {
    int matrix1[3][3], matrix2[3][3], result[3][3];
    int rows = 3, cols = 3;

    cout << "Matrix 1: " << endl;
    inputMatrix(matrix1, rows, cols);
    cout<<endl;
    
    cout << "Matrix 2: " << endl;
    inputMatrix(matrix2, rows, cols);
    cout<<endl;
    
    // Addition of matrices
    addMatrices(matrix1, matrix2, result, rows, cols);
    cout << "\nAddition of matrices: " << endl;
    printMatrix(result, rows, cols);

    // Multiplication of matrices
    multiplyMatrices(matrix1, matrix2, result, rows, cols);
    cout << "\nMultiplication of matrices: " << endl;
    printMatrix(result, rows, cols);

    // Transpose of Matrix 1
    transposeMatrix(matrix1, result, rows, cols);
    cout << "\nTranspose of Matrix 1: " << endl;
    printMatrix(result, rows, cols);

    // Transpose of Matrix 2
    transposeMatrix(matrix2, result, rows, cols);
    cout << "\nTranspose of Matrix 2: " << endl;
    printMatrix(result, rows, cols);

    return 0;
}
