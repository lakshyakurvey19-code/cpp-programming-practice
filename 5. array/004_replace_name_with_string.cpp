
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char name[100];

    cout << "Enter your name: ";
    cin.getline(name, 100);

    strcpy(name, "I AM IDIOT");

    cout << "Output: " << name;

    return 0;
}
