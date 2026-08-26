#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout <<"Enter the angles of triangle:";
    cin >> a >> b >> c;

    if(a+b+c == 180 && a>0 && b>0 && c>0){
        cout <<"Its is the valid triangle";
    }
    else{
        cout<<"Its is not a valid triangle";
    }

    return 0;
}