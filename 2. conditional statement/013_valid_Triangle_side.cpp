#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout <<"Enter the angles of triangle:";
    cin >> a >> b >> c;

    if((a+b>c) && (a+c>b) && (b+c>a)){
        cout <<"Its is the valid triangle";
    }
    else{
        cout<<"Its is not a valid triangle";
    }

    return 0;
}