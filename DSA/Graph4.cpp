//Topological Sort
/*
A topological oordering is a ordering of a nodes in a directed graph
where for each directed edge from node A to node B,Node A appears before
Node B in the ordering.

Note:Only Directed acyclic graph has topological sort.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int count=0;
    vector<vector<int>> adjl(n);
    vector<int> indeg(n,0);

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adjl[u].push_back(v);
        indeg[v]++;
    }
    queue<int> pq;
    for(int i=0;i<n;i++){
        if(indeg[i]==0){
            pq.push(i);
        }
    }
    while(!pq.empty()){
        count++;
        int x=pq.front();
        pq.pop();
        cout<<x<<"->";

        for(auto it:adjl[x]){
            indeg[it]--;
            if(indeg[it]==0){
                pq.push(it);
            }
        }
    }
}