//Coin Change Problem

#include<bits/stdc++.h>
using namespace std;
#define vi vector<int> 
const int N=1e3+2;
int dp[N][N];

int CoinChange(vi &a,int n,int x){
    if(x==0)
        return 1;
    if(x<0)
        return 0;
    if(x<=0)
        return 0;
    if(dp[n][x]!=-1)
        return dp[n][x];
    dp[n][x] = CoinChange(a,n,x-a[n-1])+CoinChange(a,n-1,x);
    return dp[n][x];
}

int main(){
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            dp[i][j]=-1;
        }
    }
    int x;
    cin>>x;
    cout<<CoinChange(a,n,x);
    return 0;
}