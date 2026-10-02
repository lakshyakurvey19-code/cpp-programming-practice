#include <iostream>
using namespace std;

// Basic Car class
class Car {
public:
    string brand;
    string model;
    int year;

    // Function to display car details
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout<<endl;
    }
};

int main() {
    // Create object of Car
    Car car1;
    car1.brand = "Honda";
    car1.model = "Civic";
    car1.year = 2022;

    Car car2;
    car2.brand = "toyota";
    car2.model = "carmry";
    car2.year = 2026;

    Car car3;
    car3.brand = "ford";
    car3.model = "mustang GTD";
    car3.year = 2025;

    Car car4;
    car4.brand = "honda";
    car4.model = "Acura NSX Type S (A legendary hybrid super car)";
    car4.year = 2022;

    // Display car details
    car1.display();
    car2.display();
    car3.display();
    car4.display();

    return 0;
}
