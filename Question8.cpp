#include <iostream> 
using namespace std;
class Monitor{
    int n; 
    public: 
    void getData(){
        cout << "Enter number:- " ;
        cin >> n;
    }
    void Alaram(){
        string tag;
        if(n%3 == 0){tag = 'Buzz'; cout << tag;}
        else if(n%5 == 0){tag = 'Fuzz'; cout << tag;}
        else if(n%3 == 0 && n%5 == 0){tag = 'Buzz | Fuzz'; cout << tag;}
        else{tag = 'Not valid'; cout << tag;}
    }
}; 
int main(){
    Monitor obj4;
    obj4.getData();
    obj4.Alaram();
    return 0;
}