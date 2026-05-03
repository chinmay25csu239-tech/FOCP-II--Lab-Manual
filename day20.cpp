// File Handling in C++
// File handling deals with reading and writing from different files such as a txt file, python file, C file or any file 

//WAP to read the data from console and write the data in a text file.
// Read the data from student txt file and print the output on console screen.
// To work with FH, we need 'fstream' header file to work the file

// #include <iostream> 
// #include <fstream> // fstream is a library which is used to work with files . 
// #include <string> 
// whatever name of object a user has kept, that object will be used for working with file but for simplicity purpose , we can take the name of the object as fout & fin. 
// using namespace std; 
// int main(){
//     string name;
//     int age;
//     ofstream fout; // ofstream is output file stream is used for printing output in the file. | fout is user defined object of ofstream. we can have any name of this object  
//     fout.open("student.txt");  // open is a predefined function to open a file and we have to mention the complete path of the file . if the file exist, the object will do the operation on existing file, but, if the file is not there, creates a object in specifed path and if path not there, then file is created in the same directory where we are working 
//     cout << "Enter name & age: ";
//     cin >> name;
//     cin >> age;
//     fout << name << endl;
//     fout << age;
//     fout.close();  
//     ifstream fin; // ifstream is input file stream is used to extract input from file.
//     fin.open("student.txt");
//     fin >> name;
//     fin >> age;
//     // fin will read the data from the file 
//     cout << name;
//     cout << age;
//     fin.close();  // file output stream will close my file
// }


// Modes of file:-
/* 
1. ios::out --> Writing to a file (default mode for ofstream) 
2. ios::in --> reading from a file (default mode for ifstream)
3. ios::app --> append the data into file
4. ios:: trunce --> Erase(delete) the from file  if it exist
5. ios:: binary --> works with binary file 
     fout.open("student.txt" , ios:: out | ios:: app)
*/

// Exception handling in C++ 
/*
1. Complie time error --> Those errors which may come during complie time, and mostly they are syntaxical errors, due too the wrong syntax, such as
missing semicolon or spelling mistake in any predefined function etc. But, exceptions are run timme error whhich occur due to some mistake in the logic 
written by the developer. For eg, divison by zero , array index out of bound . (size of array = 4, and try to access the 5th elem)
2. Abnormal shutdown --> when an exception occurs, it arbutplty terminates the program if we have not written any mechanism to handle the exception . 
 We handle the exception by 3 keywords:
    2.1 ) try --> We place the code which might throw an exception in try block  
    2.2) throw --> throw the exception 
    2.3) catch --> catch the exception   
*/


// WaP to error exception handle 
// #include <iostream> 
// using namespace std;
// int main(){
//     int a,b;
//     cout << "enter 2 nos: ";
//     cin >> a >> b;
//     try{
//         if (b==0){throw b;}
//     }
//     catch (int x){
//         cout << "exception occured" << x;
//     }
// }

// multiple catch block in exception handling 
// we can have multiple catch blocks for a single try statement and mostly we use only 1 try statement followed by multiple catch block
// which means we try to keep all the exceptions in 1 try statement but , it can be caught by respective catch block 

#include <iostream> 
using namespace std;
int main(){
    int choice; cin >> choice;
    try{
        if(choice == 1){throw 100;} // Goes to Catch 1 
        else if(choice == 2){throw 5.2;} // Goes to Catch 2
        else if (choice == 3){throw "Wrong choice";} // Goes to catch 3 
        catch(int x){   // Catch 1 :: Catches integer value 
            cout << "Integer exception";
        }
        catch(double x){ // Catch 2 :: Catches floating value  
            cout << "Double exception" << x;
        }
        catch (const char *msg){ // Catch 3 :: Catches message value   {always in the end }
            cout << msg;
        }
        catch(...){
            cout << "Exception occured";
        }
    }
}
// if any of the exception does not have a respective catch block, then it will go to Catch 3 