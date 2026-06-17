#include<iostream>
using namespace std;

int main(){

    string text;
    getline(cin, text);
    string result;

    for(int i = 0 ; i< text.length() ; i++){
        char c = text[i];
        if(c >='a' && c <='z')
        {
            c = ((c -'a' +3)%26)+'a';
        }

        else if ( c >='A' && c <= 'Z')
        {
             c = ((c -'A' +3)%26)+'A';
        }
        
        result +=c;

    }

    text = result;

    cout<< text;
    
}