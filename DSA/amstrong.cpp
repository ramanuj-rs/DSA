#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int original=n;
    while(n>0){
        int rem=n%10;
        sum+=pow(rem,3);
        n=n/10;
    }
    if(sum==original){
        cout<<"Amstrong";
    }
    else{
        cout<<"Not amstrong";
    }

    return 0;

}