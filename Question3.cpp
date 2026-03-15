//Convert temperature ( F to C & vice versa) 
#include <iostream>
using namespace std;
int main(){
    cout << "Fahreint to Celusius" << endl;
    int temp;
    cout << "Enter temperature ";
    cin >> temp;
    int ans;
    ans = (temp - 32) * 5/9;
    cout << "Celusius" <<  ans;
    cout << "----------------" ; 
    cout << "Celusis to Fahreint \n";
    int temp1;
    cout << "Enter temperature ";
    cin >> temp1;
    int ans1;
    ans1 = (temp1 * 9/5) + 32;
    cout << "Fahreint" <<  ans; 
}