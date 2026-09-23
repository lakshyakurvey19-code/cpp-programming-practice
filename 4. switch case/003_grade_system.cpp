#include<iostream>
using namespace std;
int main(){
    int marks;
    char grade;

    cout <<"Enter the marks of student :";
    cin >>marks;

    if (marks >= 90){
        grade ='A';
    }
    else if(marks >= 80){
        grade ='B';
    }
    else if(marks >= 70){
        grade ='C';
    }
    else if(marks >= 60){
        grade ='D';
    }
    else{
        grade ='F';
    }

    switch (grade)
    {
    case 'A':
        cout<<"grade = A";
        break;
    
    case 'B':
        cout<<"grade = B";
        break;

    case 'C':
        cout<<"grade = C";
        break;
    
    case 'D':
        cout<<"grade = D";
        break;

    case 'F':
        cout<<"grade = F";
        break;
    default:
        cout <<"";
        break;
    }
    
    return 0;
}