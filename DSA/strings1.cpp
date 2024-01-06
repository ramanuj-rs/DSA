//Uppercae and lowercase conversion

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="yiwetuw";
    //convert into upper case
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    cout<<str<<endl;

    //convert to lowercase
    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
    cout<<str<<endl;

    //Conversion using inbuilt function
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;

    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str<<endl;
    
    return 0;
}