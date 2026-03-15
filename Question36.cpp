#include <iostream>
using namespace std;

int main() {
    int m, n, p, q;
    cout << "Enter m, n, p, q: ";
    cin >> m >> n >> p >> q;

    if(n != p) {
        cout << "Multiplication invalid!";
        return 0;
    }

    int a[m][n], b[p][q], res[m][q];

    for(int i=0; i<m; i++) {
        for(int j=0; j<q; j++) {
            res[i][j] = 0;
            for(int k=0; k<n; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return 0;
}