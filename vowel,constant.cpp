// Input a single alphabet and check if it is a vowel or consonant. 
#include <iostream>
using namespace std;
int main(){
    char character;
    cout<<"Enter an alphabet";
 cin>>character;
if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u' )
{cout<<"Vowel";}
else{
    cout<<"Constant";
}
return 0;
}
