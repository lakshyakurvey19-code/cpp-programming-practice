#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int choice,a,b,c,d;
    float r1, r2;

    cout <<"Enter Three number :";
    cin >> a >> b >> c;

    d = ((b*b)-(4*a*c));

    if(d > 0)
        choice = 1;
    else if(d == 0)
        choice = 2;
    else
        choice = 3;

    switch (choice){
    case 1:
        r1 = (-b + (sqrt(d)))/(2*a);
        r2 = (-b - (sqrt(d)))/(2*a);
        cout << "roots: "<< r1 << r2;
        break;
    case 2:
        r1 = (-b)/(2*a);
        cout << "roots: "<<r1;
        break;
    case 3:
        cout << "Roots are imaginary\n"; 
        cout << "Root 1 = " << -b / (2 * a) << " + " << sqrt(-d) / (2 * a) << "i" << endl; 
        cout << "Root 2 = " << -b / (2 * a) << " - " << sqrt(-d) / (2 * a) << "i" << endl;
        break;
    
    default:
        break;
    }

    return 0;
}