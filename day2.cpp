// Bill amount after discount
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter item no: ";
//     cin >> n;
//     int q;
//     cout << "Enter Qunatity: ";
//     cin >> q;
//     float p;
//     cout << "Enter price: " ;
//     cin >> p;
//     float total = p*q; 
//     float dp = total * 20;
//     cout << "Item no : " << n <<endl;
//     cout <<  "The total price: " << total << endl;
//     cout << "The discount : 20" << endl;
//     cout << "The discount prig++ce: " << dp << endl;
// return 0;
// }

// Swap two variable using multiply & divide  (Method 1)
// #include <iostream>
// using namespace std;
// int main(){
//     int n1;
//     int n2;
//     cout << "Enter first number: ";
//     cin >> n1;
//     cout << "Enter second number: ";
//     cin >> n2;
//     cout << "Your number : " << n1 << " & " << n2 << endl;
//     if (n1 != 0 && n2 != 0) {
//         n1 = n1 * n2; 
//         n2 = n1 / n2; 
//         n1 = n1 / n2; 
//     } else {
//         cout << "Error: Cannot swap using this method if a variable is 0." << endl;
//     }

//     cout << "After swap: " << n1 << " & " << n2 << endl;
// }

// Swap two variable using 'temp' variable 
#include <iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    int temp;
    cout << "Enter first number: " ;
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;
    cout << "Your number : " << n1 << " & " << n2 << endl;
    temp = n1;
    n1 = n2;
    n1 = temp;
    temp = n2;
    n2 = n1;
    cout << "Swapped number : " << n1 << " & " << n2 << endl;
    return 0;
}