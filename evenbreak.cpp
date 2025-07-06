//Write a loop that prints all even numbers from 1 to 20, but break the loop if the number reaches 12.
#include <iostream>
using namespace std;
int main(){
    for(int i=2;i<=20;i+=2){
        if(i==12){
            break;
        }
        cout<<i<<" ";
    }
    return 0;
} 