#include <iostream>
using namespace std;

int main() {
    int mat1[3][3], mat2[3][3], sum[3][3];
    int i, j;

    // Input first 3x3 matrix
    cout << "Enter elements of first 3x3 matrix:" << endl;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cin >> mat1[i][j];
        }
    }

    // Input second 3x3 matrix
    cout << "Enter elements of second 3x3 matrix:" << endl;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cin >> mat2[i][j];
        }
    }

    // Computing the sum
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Displaying the result
    cout << "Sum of matrices:" << endl;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl; // New line after each row
    }

    return 0;
} 