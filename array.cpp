//Input 5 integers into an array and print them using a loop.
#include <iostream>
using namespace std;//
void ArrayFun(){
    int n;
    int arr[n];
    cout<<"Enter Length of Array";
    cin>>n;
    cout<<"Enter values to fill up the array";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
     for(int i=n; i<=n-1; i--){
        cout<<arr[i]<<" ";
    }

}
int main(){
    ArrayFun();
    return 0;
}