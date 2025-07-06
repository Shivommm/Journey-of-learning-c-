//Use a for loop to print all even numbers between 1 and 50.
#include <iostream>
using namespace std;
void printEvenOddNumbers(int n){
    if(n==1){
        cout<<"All Odd numbers till 50"<<endl;
    }else{
        cout<<"All Even numbers till 50"<<endl;
    }
    for(int i=n;i<=50;i=i+2){
        cout<<i <<" ";
    }
    cout <<endl;
}
int main(){
    printEvenOddNumbers(2);
    printEvenOddNumbers(1);
    return 0;
}