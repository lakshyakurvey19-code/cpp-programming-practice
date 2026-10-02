#include <iostream>
using namespace std;

class Employee {
    int id;
    char name[50];
    float basic, hra, da, salary;

public:
    void input() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basic;
        cout << "Enter HRA: ";
        cin >> hra;
        cout << "Enter DA: ";
        cin >> da;
    }

    void calculateSalary() {
        salary = basic + hra + da;
    }

    void display() {
        cout << "\n--- Employee Details ---\n";
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Total Salary: " << salary << endl;
    }
};

int main() {
    Employee e;
    Employee *ptr = &e;  // pointer to object

    ptr->input();
    ptr->calculateSalary();
    ptr->display();

    return 0;
}
