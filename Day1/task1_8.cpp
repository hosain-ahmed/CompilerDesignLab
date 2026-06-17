#include<iostream>
using namespace std;

int main(){

    string text;
    getline(cin , text);
    
    string result; 
     result += text[0];

    for(int i = 0 ; i < text.length()-1 ; i++){

        if(text[i] == ' ' || text[i] =='-'){
            result += text[i+1];
        }

    }
        cout<<result;

}