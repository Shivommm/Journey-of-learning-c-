#include <iostream>
using namespace std;
int main(){
    double F;
    cout<<"Enter temp Fahrenite: ";
    cin>>F;
    double C;
    C = (F-32)*5.0/9.0;
    cout<<"Temprature In Celsius: "<<C;

    return 0;
}