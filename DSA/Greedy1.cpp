//Indian Coin Change Problem

//You are given an array of Denominations and a value X.You need to
//find minimum number of coins required to make the value X.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    int ans=0;
    sort(a.begin(),a.end(),greater<int>());
    for(int i=0;i<n;i++){
        ans+=x/a[i];
        x-=x/a[i]*a[i];
    }
    cout<<ans;
    return 0;
}
