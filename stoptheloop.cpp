//Print numbers 1 to 10 but stop the loop if number reaches 5.
#include <iostream>
using namespace std;
int main(){
    int i;
    for (int i=1; i<=10; i++){
    if( i==5){
        break;
    }
    cout<<i<<" ";
}
    return 0;
}