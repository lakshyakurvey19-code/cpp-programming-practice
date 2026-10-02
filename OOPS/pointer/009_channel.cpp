#include<iostream>
using namespace std;
class channel{
    private:
        int subs;

    public:
        channel(int s){
            subs = s;
        }
        void operator--(){
            subs -= 10;
        }
        void display(){
            cout << subs;
        }

};

int main(){
    int n;
    cout<< "Enter the number :";
    cin >> n;
    channel gs(n);
    --gs;
    gs.display();
    return 0;
}