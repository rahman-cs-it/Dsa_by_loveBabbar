#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "please enter first number "<< endl;
    cin >> a;

    int b;
    cout << "Please enter second number "<< endl;
    cin >> b;

    char op;
    cout << "please enter your operation that you want to perform"<< endl;
    cin >> op;

    switch(op){
        case '+' : cout <<"a+b is " << a+b << endl;
        break;

        case '-' : cout << "a-b is " << a-b << endl;
        break;

        case '*' : cout << "a*b is " << a*b << endl;
        break;

        case '/' : cout << "a/b is " << a/b << endl;
        break;

        default : cout << "please enter + or - or * or / operations" << endl;
    }
}