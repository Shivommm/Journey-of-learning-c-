// Input a number and check if it is divisible by 3 or 7.
#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter Your Number: ";
    cin>>number;
    if(number%3==0 && number%7==0){
        cout<<"Number is Divisible by both";
    }
    else if (number%3==0){
        cout<<"Number is Divisible by 3";
    }
    else if(number%7==0){
        cout<<"Number is Divisible by 7";
    }
    else{
        cout<<"Number is Not Divisible by both";
    }
    return 0;

}