#include <iostream>
using namespace std;
void TakingValue(){
    double a;
    double b;
    double c;
    double x;
    cout<<" Enter a: ";
    cin>>a;
    cout<<" Enter b: ";
    cin>>b;
    cout<<" Enter c: ";
    cin>>c;
    x=a/b-c;
    cout<<"x = "<<x;
}
int main(){
    TakingValue();
    return 0;
}