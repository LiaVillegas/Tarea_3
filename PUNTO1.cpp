// PUNTO 1

#include <string.h>
#include <iostream>
using namespace std;

char letras[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

void FuncionMorse(string pp)
{

    for(char a : pp)
    {
        for(int i=1; i<=26; ++i)
        {
            if (a==letras[i]){
              cout<<morse[i];
              cout<<" ";
            }
        }
        if (a == ' ')
           {
       cout<<"/";
    }
  }
}

int main(){
   string p;
   cout<<"Phrase to enter : "<<endl;
   getline(cin,p);

   FuncionMorse(p);

}