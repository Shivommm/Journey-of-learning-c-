// Input year. If divisible by 4, it's a leap year (ignore century rule for now).
#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter Your Year:";
    cin>>year;
    if(year%4==0){
        cout<<"Leap year";
    }
    else{
        cout<<"Not a Leap year";
    }
    return 0;
    
}
