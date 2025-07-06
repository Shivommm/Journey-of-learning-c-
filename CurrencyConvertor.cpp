//Input a currency code (1 = USD, 2 = EUR, 3 = INR) and convert a fixed amount to that currency.
#include <iostream>
using namespace std;
int main(){
    double cu;
    cout<<"Enter the amount for coversion: ";
    cin>>cu;
    int cc;
    cout<<"Enter the currency code (1 = USD, 2 = EUR, 3 = INR):  ";
    cin>>cc;
    switch(cc){
        case 1:
        cout<<"The amount in USD is: "<<cu/74.85<< $<<endl;
        break;
        case 2:
        cout<<"The amount in EUR is: "<<cu/88.50<<Eu<<endl;
        break;
        case 3:
        cout<<"The amount in INR is: "<<cu<<endl;
        break;
        default:
        cout<<"Invalid currency code you dumbass piece of shit!!!!!!";
        break;
    }
    return(0);

}