#include <iostream>
using namespace std;
class Prime {
private:
    int n;
public:
    void getdata() { 
        cout << "Enter number: "; 
        cin >> n; 
    }
    void checkdata() {
        if (n < 2) {
            cout << "Neither prime nor composite";
            return;
        }
        int isPrime = 1; // Assume the number is prime
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0; // Found a factor
                break;      
            }
        }
        if (isPrime == 1){cout << "number is prime";}
        else {cout << "number is not prime";}
    }
};

int main() {
    Prime c;
    c.getdata();
    c.checkdata();
    return 0;
}