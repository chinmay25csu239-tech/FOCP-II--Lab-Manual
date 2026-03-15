#include <iostream>
using namespace std;

int main() {
    float salary[10], total = 0;
    for(int i = 0; i < 10; i++) {
        cin >> salary[i];
        total += salary[i];
    }
    cout << "Total: " << total << "\nAverage: " << total/10;
    return 0;
}