//Print numbers from 1 to 10 but skip everything after number 7 (stop at 7 using break).
#include <iostream>
using namespace std;
int main(){
    for(int i=1;i<=10;i++){
        if(i==8){
            break;
        }
        cout<<i<<" ";}
        return 0;
    }
