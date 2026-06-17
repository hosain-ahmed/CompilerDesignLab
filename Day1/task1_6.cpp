#include<iostream>
using namespace std;

int main(){

    string text ;
    string result;

    getline(cin, text);

    for(int i = 0 ; i < text.length() ; i++){
        if(text[i]=' '){
            continue;
        }
        else{
            result += text[i];
        }
    }
    cout<<result<<endl;
}