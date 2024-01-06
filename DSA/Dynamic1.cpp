//Fibonacci using dynamic programminf approach

#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
const int N=1e5+2;
int dp[N];

//Using Memorization

// int fibo(int n){
//     if(n==1 || n==0){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
//     if(dp[n]!=-1)
//         return dp[n];
//     dp[n]= fibo(n-1)+fibo(n-2);
//     return dp[n];
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<N;i++){
//         dp[i]=-1;
//     }
//     cout<<fibo(n)<<endl;
// }


//Using Tabulation

int main(){
    int n;
    cin>>n;

    vi dp(n+1);
    dp[0]=0;
    dp[1]=0;
    dp[2]=1;

    for(int i=3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }

    cout<<dp[n];
    return 0;
}