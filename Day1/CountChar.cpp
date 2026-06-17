#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int c = 0 ;

    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == ' '){
            continue;
        }
        else if (s[i]=='    '){
            continue;
        }
        else{
            c++;
        }
    }
    cout<<c;
}