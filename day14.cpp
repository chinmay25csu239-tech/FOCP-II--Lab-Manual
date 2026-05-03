#include <iostream>
using namespace std;

class Course {
    public:
        int Course_id;
        int Course_Module;
        Course() {
            Course_id = 0;
            Course_Module = 0;
        }
        Course(int id, int module) {
            Course_id = id;
            Course_Module = module;
        }
        void display() {
            cout << "Course ID: " << Course_id << endl; 
            cout << "Course Module: " << Course_Module << endl;
        }
};

int main() {
    Course c1(2, 5); 
    c1.display(); 
    return 0;
}