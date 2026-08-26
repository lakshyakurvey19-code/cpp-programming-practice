#include<iostream>
using namespace std;
int main(){
    int amn;
    int count;
    cout << "Enter the amount :";
    cin >> amn;

    int totalNotes = 0;
    int note = 500;

    for(int i = 0; i<10 && amn > 0; i++){
        if(amn >= note){
            count = amn/note;
            cout << note <<":"<< count << endl;
            totalNotes += note;
            amn %= note;
        }

        if(note == 500){
            note = 200;
        }
        else if(note == 200){
            note = 100;
        }
        else if(note == 100){
            note = 50;
        }
        else if(note == 50){
            note = 20;
        }
        else if(note == 20){
            note = 10;
        }
        else if(note == 10){
            note = 5;
        }
        else if(note == 5){
            note = 2;
        }
        else if(note == 2){
            note = 1;
        }
    }
    cout <<"\nTotal number of notes :"<< totalNotes << endl;
    return 0;
}