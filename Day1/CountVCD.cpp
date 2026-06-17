#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int v = 0 ;
    int c = 0;
    int d = 0;

    for(int i = 0 ; i < s.length() ; i++){
        if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' ||s[i] == 'A' || s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U' ){
            v++;
        }
        else if (s[i]=='0'||s[i] == '1' ||s[i] == '2' ||s[i] == '3' ||s[i] == '4' ||s[i] == '5' ||s[i] == '6' ||s[i] == '7' ||s[i] == '8' ||s[i] == '9' ){
            d++;
        }
        else if (s[i]==' '){
            continue;
        }
        else{
            c++;
        }
    }
    cout<<v<<" " <<c<<" "<<d;
}