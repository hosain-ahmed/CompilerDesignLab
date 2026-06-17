#include<iostream>
#include <vector>

using namespace std;

int main(){

    vector<char> words;
    string text;
    // use ~ to break 
    while(true){

        getline(cin , text);
        if(text =="~"){
            break;
        }
        else{
        for(int i =0 ; i < text.length() ; i++){
            words.push_back(text[i]);

        }}
        words.push_back(' ');
    }

    for(char ch : words){
        cout<<ch;
    }

}