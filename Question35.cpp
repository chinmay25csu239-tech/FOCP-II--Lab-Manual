#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], transpose[3][3];
    int i, j;
    cout << "Enter elements for 3x3 matrix:" << endl;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j]; 
        }
    }
    cout << "\nTranspose of the matrix:" << endl;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}