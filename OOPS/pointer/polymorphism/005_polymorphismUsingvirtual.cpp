#include <iostream>
using namespace std;

// Base class
class Vehicle
{
public:
    virtual void start(){
        cout << "Vehicle is starting." << endl;
    }
};

class Car : public Vehicle
{
public:
    void start() override{
        cout << "Car is for drifting and dracracing." << endl;
    }
};

class Bike : public Vehicle
{
public:
    void start() override{
        cout << "super Bike is only for pro raiders" << endl;
    }
};

int main(){
    Vehicle *v;

    Car c;
    Bike b;

    v = &c;
    v->start();

    v = &b;
    v->start();

    return 0;
}