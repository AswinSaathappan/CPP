#include <iostream>

using namespace std;

// Forward declaration of the Matrix class
class Matrix;

// Matrix class definition
class Matrix {
private:
    double* data; // Pointer to 1D array representing 2D matrix
    int m; // number of rows
    int n; // number of columns
public:
    // Constructor
    Matrix(int rows, int cols) : m(rows), n(cols) {
        // Allocate memory for the 2D matrix
        data = new double[m * n];
    }

    // Destructor
    ~Matrix() {
        // Free memory for the 2D matrix
        delete[] data;
    }

    // Function to input matrix data
    void inputMatrixData() {
        cout << "Enter matrix elements:" << endl;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> data[i * n + j]; // Accessing element at row i, column j
            }
        }
    }

    // Function to get the number of rows
    int getRows() {
        return m;
    }

    // Function to get the number of columns
    int getCols() {
        return n;
    }

    // Function to get matrix data
    double* getData() {
        return data;
    }

    // Function to perform matrix multiplication
    Matrix multiply(Matrix& other) {
        if (n != other.getRows()) {
            cerr << "Error: Incompatible matrix dimensions for multiplication." << endl;
            exit(1);
        }

        Matrix result(m, other.getCols());

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < other.getCols(); ++j) {
                double sum = 0.0;
                for (int k = 0; k < n; ++k) {
                    sum += *(data + i * n + k) * *(other.getData() + k * other.getCols() + j);
                }
                *(result.getData() + i * result.getCols() + j) = sum; // Store result in the result matrix
            }
        }

        return result;
    }
};

int main() {
    int m1, n1, m2, n2;

    // Input dimensions of the first matrix
    cout << "Enter number of rows in the first matrix: ";
    cin >> m1;
    cout << "Enter number of columns in the first matrix: ";
    cin >> n1;

    // Input dimensions of the second matrix
    cout << "Enter number of rows in the second matrix: ";
    cin >> m2;
    cout << "Enter number of columns in the second matrix: ";
    cin >> n2;

    // Create Matrix objects
    Matrix matrix1(m1, n1);
    Matrix matrix2(m2, n2);

    // Input data for the matrices
    cout << "Enter elements of the first matrix:" << endl;
    matrix1.inputMatrixData();

    cout << "Enter elements of the second matrix:" << endl;
    matrix2.inputMatrixData();

    // Perform matrix multiplication
    Matrix result = matrix1.multiply(matrix2);

    // Output the result
    cout << "Result of matrix multiplication:" << endl;
    for (int i = 0; i < result.getRows(); ++i) {
        for (int j = 0; j < result.getCols(); ++j) {
            cout << *(result.getData() + i * result.getCols() + j) << " ";
        }
        cout << endl;
    }

    return 0;
}

