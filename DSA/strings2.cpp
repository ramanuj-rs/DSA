//Form the biggest number from the numeric string

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="8642645848627";
    sort(str.begin(),str.end(),greater<int>());
    cout<<str<<endl;

    return 0;
}