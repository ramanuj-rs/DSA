//Minimum number of squares whose sum equals to given number 'n'

#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7,N=1e5+2;
#define vi vector<int>
int dp[N];

//Normal approach

// int minSquare(int n){
//     if(n==0 || n==1 || n==2 || n==3)
//         return n;
    
//     int ans=MOD;
//     for(int i=1;i*i<=n;i++){
//         ans=min(ans,1+minSquare(n-i*i));
//     }
//     return ans;
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<minSquare(n)<<endl;
// }


//Using Memorization

// int minSquare(int n){
//     if(n==0 || n==1 || n==2 || n==3)
//         return n;
//     if(dp[n]!=MOD)
//         return dp[n];

//     for(int i=1;i*i<=n;i++){
//         dp[n]=min(dp[n],1+minSquare(n-i*i));
//     }
//     return dp[n];
// }

// int main(){
//     for(int i=0;i<N;i++){
//         dp[i]=MOD;
//     }
//     int n;
//     cin>>n;
//     cout<<minSquare(n)<<endl;
// }


//Using Tabulation

int main(){
    int n;
    cin>>n;
    vi dp(n+1,MOD);
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;

    for(int i=1;i*i<=n;i++){
        for(int j=0;i*i+j<=n;j++){
            dp[i*i+j]=min(dp[i*i+j],1+dp[j]);
        }
    }
    cout<<dp[n];
}
