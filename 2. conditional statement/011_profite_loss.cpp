#include<iostream>
using namespace std;
int main(){
    float cp,sp;
    float profit , loss;
    cout << "Enter the cost price :";
    cin >> cp;
    cout <<"Enter the selling price :";
    cin >> sp;

    if (sp > cp) {
        profit = sp - cp;
        float profit_pr = (profit / cp) * 100;
        cout << "Profit = " << profit << endl;
        cout << "Profit Percentage = " << profit_pr << "%" << endl;
    } else if (cp > sp) {
        loss = cp - sp;
        float loss_pr = (loss / cp) * 100;
        cout << "Loss = " << loss << endl;
        cout << "Loss Percentage = " << loss_pr << "%" << endl;
    } else {
        cout << "No Profit, No Loss" << endl;
    }

    return 0;
}