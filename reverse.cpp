//Print the array elements from the last to the first.
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
void ArrayFun(){
    int n;
    int arr[n];
    cout<<"Enter Length of Array";
    cin>>n;
    cout<<"Enter values to fill up the array";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
     for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }

}
int main(){
    ArrayFun();
    return 0;
}