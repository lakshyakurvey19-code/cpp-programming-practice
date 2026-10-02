#include <iostream>
using namespace std;
class Employee
{
public:
    virtual void displaySalary()
    {
        cout << "Employee Salary= Rs. 65,000" << endl;
    }
};
class Manager : public Employee
{
public:
    void displaySalary()
    {
        cout << "Manager Salary= Rs. 1,65,000" << endl;
    }
};
class Developer : public Employee
{
public:
    void displaySalary()
    {
        cout << "Developer Salary= Rs. 1,50,000" << endl;
    }
};
int main()
{
    Employee *ptr;
    Manager m;
    Developer d;

    ptr = &m;
    ptr->displaySalary();
    
    ptr = &d;
    ptr->displaySalary();

    return 0;
}