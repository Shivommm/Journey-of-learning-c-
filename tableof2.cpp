#include <iostream>
using namespace std;
void PrintingTables(int n){
     cout<<"Table of "<<n<<endl;
    for(int i=1; i<=10; i++){
        cout<<n<< " x "<<i<<" = "<<i*n<<endl;

    }
}
int main(){
    PrintingTables(1);
    PrintingTables(2);
    PrintingTables(3);
    PrintingTables(4);
    return 0;
}

