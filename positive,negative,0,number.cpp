// Input a number and determine if it is positive, negative, or zero.
#include <iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
    if(number>0){
        cout<<"Positive";
    }
    if(number<0){
        cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }
    return 0;
}