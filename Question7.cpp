#include <iostream>
#include <string>
using namespace std;
int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    string common = " is the smallest.";
    if (n1 <= n2 && n1 <= n3) {cout << n1 << common;} 
    else if (n2 <= n1 && n2 <= n3) {cout << n2 << common;} 
    else {cout << n3 << common;}
    return 0;
}