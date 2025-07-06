//Input a number n and calculate the sum of numbers from 1 to n.
#include <iostream>
using namespace std;
void sumofnumbers(int n)
{
    int sum=0;
    for(int i=n;i>0;i-- ){
        sum=sum+i;
    }
    cout<<sum<<endl;
}
void printEvenOddNumbers(bool isEven,int n){
    int k= isEven ? 2 : 1;
  
    if(n==1){
        cout<<"All Odd numbers till "<<n<<endl;
    }else{
        cout<<"All Even numbers till "<<n<<endl;
    }
    for(int i=k;i<=n;i=i+2){
        cout<<i <<" ";
    }
    cout <<endl;
}
int main(){
    int n;
    int a[]={1,2,3,4,5}
    
    cout<<"Enter Your Number";
    cin>>n;
    sumofnumbers(n);

    printEvenOddNumbers(true,20);
    return 0;
}