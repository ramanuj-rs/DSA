#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define rep(i,a,b) for(int i=a;i<b;i++)

int main(){
    int n,m;
    cin>>n>>m;
    vvi adjm(n+1,vi(n+1,0));
    int x,y;

    //Adjacency Matrix
    rep(i,0,n){
        cin>>x>>y;

        adjm[x][y]=1;
        adjm[y][x]=1;
    }

    cout<<"Output"<<endl;
    rep(i,1,n+1){
        rep(j,1,m+1){
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }

    if(adjm[3][7]){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
    //Adjacency List
    vvi adjl(n+1,vi(n+1,0));
    rep(i,0,n){
        cin>>x>>y;
        adjl[x].push_back(y);
        adjl[y].push_back(x);
    }

    rep(i,1,n+1){
        cout<<i<<"->";
        vector<int> :: iterator it;
        for(it=adjl[i].begin();it!=adjl[i].end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
}