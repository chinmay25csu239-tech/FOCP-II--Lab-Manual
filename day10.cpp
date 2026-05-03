// when an object can take multiple form is call as polymorphism (eg-->  human being can be a student , friend, sibling,child etc)
// polymorphsim is of two types 
// 1. Compile time polymorphism - 1) function overloading 2) operator overloading 
// 2. Run time polymorphism -- 1) function overloaing (virtual function)

// function overloading ---> where we can have same function name which is performing different task .
// Few conditions --> 1)No of arugment passed in each function can be different 
//  2) If the no of the arugment are same, the data type of atleast 1 arugment shall be different

//// Write a program to calculate the volume of cone, cuboid , cube using function overloading
// #include <iostream>
// using namespace std; 
// class VolumeFigure{
//     public:
//     int volume (int side){return side*side*side;}
//     int volume (int lenght, int breadth , int height){return lenght*breadth*height;}
//     float volume(float radius,int height){return ((3.14*radius*radius*height)/3);}
// };
// int main(){
//     int vol_cube;
//     int vol_cuboid;
//     int vol_cone;
//     VolumeFigure ob;
//     vol_cone = ob.volume(5.2,7);
//     vol_cube= ob.volume(5);
//     vol_cuboid = ob.volume(6,7,8);
//     cout << "Vol of cone is: " << vol_cone << endl;
//     cout << "Vol of cube is: " << vol_cube << endl;
//     cout << "Vol of cuboid is: " << vol_cuboid << endl;;
//     return 0; 
// }


//// WAP to calculate area of square and rectangle using function overloading
// #include <iostream>
// using namespace std; 
// class Area{
//     public:
//     int area (int side){return side*side;}
//     int area(int lenght, int breadth){return lenght*breadth;}
// };
// int main(){
//     int area_square;
//     int area_rectangle;
//     Area obj;
//     area_square = obj.area(5);
//     area_rectangle = obj.area(5,8);
//     cout << "Area of square is: " << area_square<< endl;
//     cout << "Area of rectangle is: " << area_rectangle << endl;
//     return 0; 
// } 

//// WAP to calculate the area of circle 
// #include <iostream>
// using namespace std; 
// class Area{
//     public:
//     int area (int side){return side*side;}
//     int area(double radius){return 3.14*radius*radius;}
// };
// int main(){
//     int area_square;
//     int area_circle;
//     Area obj;
//     area_square = obj.area(5);
//     area_circle = obj.area(5);
//     cout << "Area of square is: " << area_square<< endl;
//     cout << "Area of circle is: " << area_circle << endl;
//     return 0; 
// }  

// WAP to calculate volume of sphere and hemisphere.
/// sphere --> 4/3*pi*r^3
// #include <iostream>
// using namespace std; 
// class Area{
//     public:
//     double area (double r){return ((4/3)*3.14*r*r*r);}
//     double area(double r){return ((1/2)*(4/3)*3.14*r*r*r);}
// };
// int main(){
//     int area_sphere;
//     int area_hemisphere;
//     Area obj;
//     area_sphere = obj.area(5);
//     area_hemisphere = obj.area(5);
//     cout << "Area of square is: " << area_sphere<< endl;
//     cout << "Area of rectangle is: " << area_hemisphere << endl;
//     return 0; 
// }  

/// WAP to add a) two integers ;b) first integer , second double ; c) first decimal , second integer ; d) two decimals


// #include <iostream>
// using namespace std; 
// class Add{
//     public:
//     int sum(int n1, int n2){return n1+n2;}
//     double sum(int n1, double n2){return n1+n2;}
//     double sum(double n1, int n2){return n1+n2;}
//     double sum(double n1,double n2){return n1+n2;}
// };
// int main(){
//     double sum_twoint;
//     double  sum_fisd;
//     double sum_fdsi;
//     double sum_twodeci;
//     Add ad;
//     sum_twoint = ad.sum(1,2);
//     sum_fisd = ad.sum(5,5.1);
//     sum_fdsi = ad.sum(3.4,2);
//     sum_twodeci = ad.sum(1.2,8.9);
//     cout << "Sum of two integers: " << sum_twoint << endl;
//     cout << "Sum of first integer and second double: " << sum_fisd << endl;
//     cout << "Sum of first decimal and second integer: " << sum_fdsi << endl;
//     cout << "Sum of two decimals: " << sum_twodeci << endl;
//     return 0; 
// }  

// WAP to print whether you are a student , a friend, sibling  or  a cousin . 
// Relation     condition
// Friend   --- Multiply 3 int number  
// Student  --- Multiply 3 decimal point number 
// Sibling  --- multiply 2 decimal number with 1 integer number 
// Cousin   --- multiply 2 int numbers with 1 decimal number 

#include <iostream> 
using namespace std;
class Multiply{
    public:
    int multiply(int n1, int n2, int n3); //Friend 
    double multiply(double n1, double n2, double n3); // Student
    double multiply (double n1, double n2, int n3); // Sibling 
    double multiply(int n1, int n2, double n3);  // Cousin
};
int main(){
    cout << "1. Multiply int numbers" <<endl; // Friend
    cout << "2. Multiply decimal numbers" << endl; // Student 
    cout << "3. Multiply two decimals and one int number" <<endl; //Sibling 
    cout << "4. Multiply two int and one decimal number" << endl; // Cousin
    int ch; 
    Multiply m; 
    multiply_threeint = m.multiply(2,3,4); // Friend 
    multiply_threedoub = m.multiply(2.1,3.4,4.9); // Student 
    multiply_twodouboneint = m.multiply(1.1,2.1,2); // Sibling 
    multiply_twointonedec = m.multiply(9,7,1.2); // Cousin 
    if(ch == 1){

    }
    else if(ch == 2){

    }
    else if (ch==3){

    }
    else if(ch ==4){

    }
    else{
        cout << "Oops! Invalid! "
    }
}
