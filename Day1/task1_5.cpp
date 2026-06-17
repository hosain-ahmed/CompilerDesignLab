#include<iostream>
using namespace std;

int main(){

    string text ;
    string result;

    getline(cin, text);

    for(char ch : text){
        if((ch >= 48 && ch <=57) || (ch >=65 && ch <=90) || (ch >=97 && ch <=122) || ch ==' ' ){
            result += ch;
        }
        else{
            continue;
        }
    }
    cout<<result<<endl;
}