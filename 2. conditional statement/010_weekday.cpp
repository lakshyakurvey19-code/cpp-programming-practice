#include<iostream>
using namespace std;
int main(){
    int day;
    cout << "Enter the week number (1-7) :";
    cin >> day;

    if(day == 1){
        cout << "MONDAY"<< endl;
    }
    else if(day == 2){
        cout << "TUESDAY"<< endl;
    }
    else if(day == 3){
        cout << "WEDNESDAY"<< endl;
    }
    else if(day == 4){
        cout << "THURSDAY"<< endl;
    }
    else if(day == 5){
        cout << "FRIDAY" << endl;
    }
    else if(day == 6){
        cout << "SATURDAY"<< endl;
    }
    else if(day == 7){
        cout << "SUNDAY"<< endl;
    }
    else{
        cout << "incorrent day";
        }

    return 0;
}