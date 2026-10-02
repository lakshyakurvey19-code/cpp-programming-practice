#include <iostream>
using namespace std;

class Student {
    int roll;
    char name[50];
    float marks;

public:
    void input() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\n--- Student Details ---\n";
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    Student *ptr = &s;  // pointer to object

    ptr->input();
    ptr->display();

    return 0;
}
