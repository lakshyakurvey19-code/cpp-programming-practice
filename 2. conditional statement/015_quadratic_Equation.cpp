#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c;
    float root1,root2,real;
    float realpart,imgpart;
    cout << "Enter the values of equation :";
    cin >> a >> b >> c;

    if(a == 0){
        cout << "Not a quadratic equation(a must not be zero)."<< endl;
        return 0;
    }

    int d = (pow(b,2)-4*a*c);
    cout << "The Discriminant is :"<<d<<endl;
    if(d>0){
        root1 = (-b + sqrt(d))/(2*a);
        root2 = (-b - sqrt(d))/(2*a);
        cout << "The distinct real roots are"<< root1 << " " << root2;
    }
    else if(d == 0){
        real = -b/(2*a);
        cout << "The real root is :"<< real << endl;
    }
    else{
        realpart = -b / (2*a);
        imgpart = sqrt(-d)/(2*a);
        cout << "Complex roots: " << realpart << " + " << imgpart << "i and "<< realpart << " - " << imgpart << "i" << endl;
    }

    return 0;
}