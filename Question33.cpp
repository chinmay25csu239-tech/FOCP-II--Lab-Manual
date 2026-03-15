#include <iostream>
using namespace std;

int main() {
    int marks[3][5]; // 3 students, 5 subjects
    for(int i=0; i<3; i++)
        for(int j=0; j<5; j++) cin >> marks[i][j];

    // Subject 2 of Student 1 (Index 0,1)
    cout << "Student 1, Sub 2: " << marks[0][1] << endl;
    // Subject 5 of Student 3 (Index 2,4)
    cout << "Student 3, Sub 5: " << marks[2][4] << endl;
    return 0;
} 