//Ask user to input numbers continuously. Stop taking input if user enters a negative number.
//#include <iostream>
//using namespace std;
//int main(){
 //   while(true){
   //     int num1;
     //   cout<<"Enter number ";
       // cin >> num1;
        //if(num1<0){
         //   break;
        //}
        
   // }
    //return 0;
//}


#include <iostream>
using namespace std;
int main(){
    while(true){
        int num1;
        cout<<"Enter Number:  ";
        cin>>num1;
        if(num1<0){
            break;
        }   
    }
    return 0;
}