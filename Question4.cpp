// Bill amount after discount
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter item no: ";
    cin >> n;
    int q;
    cout << "Enter Qunatity: ";
    cin >> q;
    float p;
    cout << "Enter price: " ;
    cin >> p;
    float total = p*q; 
    float dp = total * 20;
    cout << "Item no : " << n <<endl;
    cout <<  "The total price: " << total << endl;
    cout << "The discount : 20" << endl;
    cout << "The discount price: " << dp << endl;
return 0;
}