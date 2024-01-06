#include<iostream>
#include<cmath>
using namespace std;

bool pythagorian(int x,int y,int z){
    int a=max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;c=z;
    }else if(a==y){
        b=x,c=z;
    }else{
        b=x;c=y;
    }
    if(a*a==b*b+c*c){
        return true;
    }else{
        return false;
    }
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    bool check=pythagorian(x,y,z);
    if(check==true){
        cout<<"Pythagorian triplet";
    }else{
        cout<<"Not Pythagorian triplet";
    }
    return 0;
}