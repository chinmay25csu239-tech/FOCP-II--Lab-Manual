#include <iostream>
using namespace std;

int main() {
    int codes[5], count = 0;
    for(int i = 0; i < 5; i++) {
        cin >> codes[i];
        if(codes[i] % 3 == 0 && codes[i] % 5 == 0) count++;
    }
    cout << "Count: " << count;
    return 0;
}