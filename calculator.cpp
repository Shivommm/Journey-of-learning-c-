//Input two numbers and an operator (+, -, *, /) and use switch to perform the operation.
#include <iostream>
using namespace std;
int main(){
    double num1, num2;
    char op;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter the fucking operator you dumbass (+,-,*,/): ";
    cin>>op;
    switch (op){
        case'+':
        cout<<"Result: "<< num1+num2 << endl;
        break;
        case'-':
        cout<<"Result: "<< num1-num2 << endl;
        break;
        case'*':
        cout<<"Result: "<< num1*num2 << endl;
        break;
        case'/':
        if (num2!=0)
        cout<<"Result: "<< num1/num2 <<endl;
        else
        cout<<"Division by zero " << endl;
        break;
        default:
        cout<<"Unkown operator using";
        break;



    }
        return(0);
}