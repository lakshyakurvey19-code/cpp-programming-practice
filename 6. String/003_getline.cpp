#include <iostream>
using namespace std;

int main() {
    char str[8];
    int len = 0;

    cout << "Enter the name:";
    cin.getline(str,100);

    for(char ch : str)
        cout << ch << " ";    
    cout << endl;

    for(int i=0; i<str[i] != '\0'; i++){
        len++;
    }  

    cout <<"Length of the string is : " << len;
    return 0;
}