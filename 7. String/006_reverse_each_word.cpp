#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    int st = 0, i=0;
    int j;
    
    cout <<"Enter the string:";
    getline(cin,s);

    while (i<=s.length()){
        if(s[i] == ' '|| i == s.length()){
            j = i-1;

            while(st<j){
                char temp = s[st];
                s[st] = s[j];
                s[j] = temp;
                st++;
                j--;
            }

            st = i+1;
        }
        i++;
    }
    cout << s;
    return 0;
}