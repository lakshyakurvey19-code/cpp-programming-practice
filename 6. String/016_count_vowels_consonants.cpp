#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int vow = 0, cons = 0;

    cout << "Enter a string: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++){
        char ch = tolower(s[i]);

        if (isalpha(ch)){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vow++;
            }
            else if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
                cons++;
            }
        }
    }

    cout << "Vowels: " << vow <<endl;
    cout << "Consonants: " << cons <<endl;;

    return 0;
}