#include<iostream>
using namespace std;

//Reversal of string using recursion
/* void reverse(string s){
    if(s.length()==0){
        return;
    }
    string ros=s.substr(1);//return the rest of the string after index 1
    reverse(ros);
    cout<<s[0];
}

int main(){
    string s="binod";
    reverse(s);
    return 0;
} */

//Replace pi with 3.14 in string
void replacePi(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}

int main(){
    replacePi("pidjcpixxpijshpi");
    return 0;
}