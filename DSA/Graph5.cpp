//Cycle detection in undirecctedd graph

#include<bits/stdc++.h>
using namespace std;

bool isCycle(int src,vector<vector<int>> &adjl,vector<bool> &visited,int parent){
    visited[src]=true;
    for(auto i:adjl[src]){
        if(i!=parent){
            if(visited[i]){
                return true;
            }
            if(!visited[i] and isCycle(i,adjl,visited,src)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adjl(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjl[u].push_back(v);
        adjl[v].push_back(u);
    }
    bool cycle=false;
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++){
        if(!visited[i] && isCycle(i,adjl,visited,-1)){
            cycle=true;
        }
    }
    if(cycle){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
}