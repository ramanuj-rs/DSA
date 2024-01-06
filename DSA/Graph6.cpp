//Cycle detction in directed graph

#include<bits/stdc++.h>
using namespace std;

bool isCycle(int src,vector<vector<int>> &adjl,vector<bool> &visited,vector<int> &stack){
    stack[src]=true;
    if(!visited[src]){
        visited[src]=true;
        for(auto i:adjl[src]){
            if(!visited[i] and isCycle(i,adjl,visited,stack)){
                return true;
            }
            if(stack[i]){
                return true;
            }
        }
    }
    stack[src]=false;
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
    }
    bool cycle=false;
    vector<bool> visited(n,false);
    vector<int> stack(n,0);
    for(int i=0;i<n;i++){
        if(!visited[i] && isCycle(i,adjl,visited,stack)){
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