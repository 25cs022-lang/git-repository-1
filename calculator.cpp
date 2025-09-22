//calculator code
#include <iostream>
using namespace std;
int main() {
    char c;
    int num1, num2;
    cout<<"enter the operation\n";
    cin>> c;
    cout<<"enter num1\n";
    cin>>num1;
    cout<<"enter num 2\n";
    cin>>num2;
    switch(c) {
        case '+':
            cout<<num1+num2<<"\n";
            break;
        case '-':
            cout<<num1-num2<<"\n";
            break;
        case'*':
            cout<<num1*num2<<"\n";
            break;
        case'/':
            cout<<num1/num2<<"\n";
            break;
        case'%':
            cout<<num1%num2<<"\n";
            break;
        default:
            cout<<"invalid"<<"\n";
            return 0;
    }

}
//
// Created by Badhrinath on 20/09/25.
//