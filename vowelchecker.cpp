//Input a character and use switch to check if it is a vowel (a, e, i, o, u).
//Input a character and use switch to check if it is a vowel (a, e, i, o, u).
#include <iostream>
using namespace std;  
int main(){
    char ch;
    cout<<"Input your character to check if it is a vowel or not: ";
    cin>>ch;
    switch(ch){
        case'a':
        case'A':
        cout<<"Yes Your Character is a Vowel ";
        break;
        case'e':
        case'E':
       cout<<"Yes Your Character is a Vowel ";
       break;
       case'i':
       case'I':
       cout<<"Yes Your Character is a Vowel ";
        break;
        case'o':
        case'O':
         cout<<"Yes Your Character is a Vowel ";
         break;
         case'u':
         case'U':
          cout<<"Yes Your Character is a Vowel ";
          break;
          default:
          cout<<"Your Character is not a Vowel He is Characterless";
          break;

    }
          return(0);
}                                                                                                   
