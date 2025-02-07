//Rotate matrix
#include <iostream>
using namespace std;
void rotateMatrix(int n, int matrix[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++) {
        int left = 0, right = n - 1;
        while (left < right) {
            swap(matrix[i][left], matrix[i][right]);
            left++;
            right--;
        }
    }
}
void printMatrix(int n, int matrix[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the size of matrix (n x n): ";
    cin >> n;
    int matrix[100][100]; // Max size 100x100
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "Original Matrix:" << endl;
    printMatrix(n, matrix);
    rotateMatrix(n, matrix);
    cout << "Rotated Matrix (90 Degrees Clockwise):" << endl;
    printMatrix(n, matrix);
    return 0;
}
