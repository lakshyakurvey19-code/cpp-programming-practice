#include <iostream>
using namespace std;

// Base class
class Employee {
public:
    int empID;
    string name;

    void setEmployee(int id, string n) {
        empID = id;
        name = n;
    }

    void showEmployee() {
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived class
class Manager : public Employee {
public:
    string department;

    void setManager(string dept) {
        department = dept;
    }

    void showManager() {
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;              // object of derived class
    Manager *ptr = &m;      // pointer to derived class

    // Access base class members through derived class pointer
    ptr->setEmployee(101, "Lakshya");
    ptr->showEmployee();

    // Access derived class members through derived class pointer
    ptr->setManager("IT");
    ptr->showManager();

    return 0;
}
