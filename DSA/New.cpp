#include<bits/stdc++.h>
using namespace std;

int countPathMaze(int n,int m,int i,int j){
    if(i==n-1 && j==m-1){
        return 1;
    }
    if(i>=n || j>=m){
        return 0;
    }
    return (countPathMaze(n,m,i+1,j)+countPathMaze(n,m,i,j+1));
}


int main(){
    int n,m;
    cin>>n>>m;
    cout<<countPathMaze(n,m,1,1)<<endl;
    return 0;
}