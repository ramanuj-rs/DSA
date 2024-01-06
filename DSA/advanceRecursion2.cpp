#include<iostream>
#include<cmath>
using namespace std;

// Tiling problem
// int tilingWays(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return tilingWays(n-1)+tilingWays(n-2);
// }

// int main(){
//     cout<<tilingWays(4)<<endl;
//     return 0;
// }


//Friends Pairing Problem
// int friendsPairing(int n){
//     if(n==0 || n==1 || n==2){
//         return n;
//     }
//     return friendsPairing(n-1)+friendsPairing(n-2)*(n-1);
// }

// int main(){
//     cout<<friendsPairing(4)<<endl;
//     return 0;
// }


//0-1 knapsack problem
int knapsack(int value[],int weight[],int n,int w){
    if(n==0 || w==0){
        return 0;
    }
    if(weight[n-1]>w){
        return knapsack(value,weight,n-1,w);
    }
    return max(knapsack(value,weight,n-1,w-weight[n-1])+value[n-1],knapsack(value,weight,n-1,w));
}

int main(){
    int value[]={100,50,150};
    int weight[]={10,20,30};
    int w=50;
    cout<<knapsack(value,weight,3,w)<<endl;
    return 0;
}
