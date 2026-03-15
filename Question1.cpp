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
