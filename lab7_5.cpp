#include <iostream>

using namespace std;

class Vector;

class Matrix {
private:
    double* data;// Pointer to 1D array representing 2D matrix
    int m;
    int n;
public:
    Matrix(int rows, int cols) : m(rows), n(cols) {
        data = new double[m * n];// Allocate memory for the 2D matrix
    }

    ~Matrix() {
        delete[] data;
    }

    void inputMatrixData() {
        cout << "Enter matrix elements:" << endl;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> data[i * n + j];
            }
        }
    }

    void printMatrix() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << data[i * n + j] << " ";
            }
            cout << endl;
        }
    }

    double* getData() {
        return data;
    }// Function to perform matrix-vector multiplication
    Vector multiply(Vector& vec);
};

class Vector {
private:
    double* data;
    int vsize;
public:
    Vector(int size) : vsize(size) {
        data = new double[vsize];
    }

    ~Vector() {
        delete[] data;
    }

    // Function to perform matrix-vector multiplication
    friend Vector Matrix::multiply(Vector& vec);

    void inputVectorData() {
        cout << "Enter vector elements:" << endl;
        for (int i = 0; i < vsize; ++i) {
            cin >> data[i];
        }
    }

    void printVector() {
        cout << "Vector:" << endl;
        for (int i = 0; i < vsize; ++i) {
            cout << data[i] << endl;
        }
    }

    int getSize() const {
        return vsize;
    }

    double* getData() {
        return data;
    }
};
Vector Matrix::multiply(Vector& vec) {
    if (n != vec.getSize()) {
        cout << "Error: Incompatible matrix dimensions for multiplication." << endl;
        return Vector(0);
    }
    else
    {
    Vector result(m);// Resulting vector will have the same size as the number of rows in the matrix

    for (int i = 0; i < m; ++i) {
        double sum = 0.0;
        for (int j = 0; j < n; ++j) {
            sum += data[i * n + j] * vec.getData()[j];
        }
        result.getData()[i] = sum;
   }
    return result;
   }
}

int main() {
    int m, n, vsize;

    cout << "Enter number of rows in matrix: ";
    cin >> m;
    cout << "Enter number of columns in matrix: ";
    cin >> n;

    cout << "Enter size of vector: ";
    cin >> vsize;

    Matrix matrix(m, n);
    Vector vector(vsize);

    matrix.inputMatrixData();
    vector.inputVectorData();

    matrix.printMatrix();
    vector.printVector();

    Vector result = matrix.multiply(vector);cout << "Result of matrix-vector multiplication:" << endl;
	for (int i = 0; i < result.getSize(); ++i) {
        cout << result.getData()[i] << "\n";
  }
    cout << endl;

    return 0;
}
