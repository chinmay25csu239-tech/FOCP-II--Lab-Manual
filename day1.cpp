// /* #include <iostream>
// using namespace std;
// int main(){
//     cout<<"Hello World";
//     return 0;
// }
// * / 


//WAP to add two numbers 
// #include <iostream>
// using namespace std;
// int main(){
//     int num1,num2;
//     int sum;
//     cout <<"Enter 1st no: ";
//     cin>> num1;
//     cout << "Enter 2nd no: "; 
//     cin>> num2;
//     sum = num1 + num2;
//     cout << "the sum of no is : " <<sum ;
// return 0;
// } 

// WAP to add , subtract, multiply and divide 
// #include <iostream>
// using namespace std;
// int main(){
//     int num1,num2;
//     int sum;
//     int sub;
//     int multiply;
//     int divide;
//     cout << "Enter first no";
//     cin>> num1;
//     cout << "Enter second no";
//     cin >> num2;
//     sum = num1 + num2;
//     sub = num1 - num2;
//     multiply = num1 * num2;
//     divide = num1 / num2;
//     cout << "the sum of no is : " << sum  << endl;
//     cout << "the difference of no is : " << sub << endl;
//     cout << "the product of no is : " << multiply << endl ;
//     cout << "the quoitent of no is : " << divide << endl;
// return 0;
// }
 
//Convert temperature ( F to C & vice versa) 
// #include <iostream>
// using namespace std;
// int main(){
//     cout << "Fahreint to Celusius" << endl;
//     int temp;
//     cout << "Enter temperature ";
//     cin >> temp;
//     int ans;
//     ans = (temp - 32) * 5/9;
//     cout << "Celusius" <<  ans;
//     cout << "----------------" ; 
//     cout << "Celusis to Fahreint \n";
//     int temp1;
//     cout << "Enter temperature ";
//     cin >> temp1;
//     int ans1;
//     ans1 = (temp1 * 9/5) + 32;
//     cout << "Fahreint" <<  ans; 
// }

// Average marks of student
 #include <iostream> 
using namespace std;

int main() {
    int s1, s2, s3, s4, s5;
    
    cout << "Enter mark for English: "; 
    cin >> s1;
    cout << "Enter mark for Maths: "; 
    cin >> s2; 
    cout << "Enter mark for French: "; 
    cin >> s3; 
    cout << "Enter mark for Hindi: "; 
    cin >> s4; 
    cout << "Enter mark for Science: "; 
    cin >> s5;
    int tm = s1 + s2 + s3 + s4 + s5; 
    float avg = tm / 5.0; 
    cout << "Average: " << avg;
    return 0;
}
 


