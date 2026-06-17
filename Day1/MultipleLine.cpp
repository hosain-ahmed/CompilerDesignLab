#include<iostream>
using namespace std;

int main(){
    string s;
    
    int c = 0 ;

    while(true){
        getline(cin, s);
        if(s == "~"){
            break;
        }
        else{
            c++;
        }
    }

    cout<<"Total Lines = "<<c;
}