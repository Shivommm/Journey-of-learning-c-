#include <iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    if(num1<num2){
        cout<<num2;
    }
    else{
        cout<<num1;
    }
    return 0;
}