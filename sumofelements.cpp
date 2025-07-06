//Calculate and print the sum of all array elements.
#include <iostream>
using namespace std;
void FunWidnotArray(){
    int n;
    cout<<"Enter Length of The ARRAY: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements of ARRAY: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum =1;
    for(int i=0; i<n; i++){
        sum= sum * arr[i];
    }
    cout<<"sum of array: "<<sum;
        
    
}
int main(){
    FunWidnotArray();
    return 0;
}