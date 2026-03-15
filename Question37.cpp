#include <iostream>
#include <string>
using namespace std;

int main() {
    string user;
    getline(cin, user);
    int valid = 1;

    for(char c : user) {
        if(!isalnum(c)) { 
            valid = 0;
            break;
        }
    }
    cout << (valid ? "Accepted" : "Rejected");
    return 0;
}