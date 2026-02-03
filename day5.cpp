// #include <iostream>
// #include <string> 
// using namespace std;
// int main(){
//     // string str="Chinmay Patil";
//     // cout << str;
//     //---------------
//     // string name;
//     // cin >> name;
//     // cout << name;
//     //-----------------
//     // string name;
//     // cin >> name;
//     // for(int i =0; i<name.length();i++){
//     //     cout << name[i];
//     // }
//     // string name;
//     // cout << "Enter name: ";
//     // getline(cin,name); //This function reads the entire line and it does not ignore the spaces present in the buffer mem
//     // cout << "The name is : " << name;

//     int number;
//     string name;
//     cout << "Enter number: ";
//     cin >> number;
//     cin.ignore();
//     cout << "Enter name: ";
//     getline(cin,name);
//     cout << number;
//     cout << name;
//     return 0;
// }

// Leet cd=ode --> Two Sum 
// 1. Two Sum

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 
// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2] 
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

#include <iostream>
using namespace std;
int main(){
    string numbers = "1 2 3 4 5";
    int target = 6;
    int sum =0;
    for(int i =0; i<numbers.length();i++){
        for(int j =0; j<numbers.length();j++){
            if(numbers[j] + numbers[j+1]==target){
                cout << numbers[j] << "&" << numbers[j+1];
            }
            else{
                continue; 
            }
        }
    }
}

// Above code will be corrected and will be updated in day6.cpp