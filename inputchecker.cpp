// Input a character and classify it.
#include <iostream>
using namespace std;
int main(){
    char Character;
    cout<<"enter a character:";
    cin>>Character;
    if((Character>='a'&& Character<='z')|| (Character>='A'&& Character<='Z')){
        cout<<"Alphabet";
    }
    else if(Character>='0'&& Character<='9'){
        cout<<"Digit";
    }
    else{
        cout<<"Special Character";
    }
    return 0; 
}