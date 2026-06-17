#include<iostream>
using namespace std;

int main(){

    string text;
    getline(cin, text);
    string result;

    for(int i = 0 ; i< text.length() ; i++){
        char c = text[i];
        c = c+3;
        result +=c;
    }

    text = result;

    cout<< text;
    
}