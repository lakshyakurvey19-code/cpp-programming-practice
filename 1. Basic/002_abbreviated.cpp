#include<iostream>
using namespace std;
int main(){
    char fname[20], mname[20], lname[20];
    cout << "Enter full name :";
    cin >> fname >> mname >> lname ;

    cout << "The abbreviated name :"<< fname<< " " << mname<< " " << lname;

    return 0;
}
