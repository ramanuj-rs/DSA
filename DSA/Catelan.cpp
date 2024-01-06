//Catalan Numbers
//Time complexity high

//Application
/*

1.Possible number of BST
2.Paranthesis/Bracket combinations
3.Possible forests
4.Ways of triangulations
5.Possible paths in matrix

 */

#include<bits/stdc++.h>
using namespace std;

int catalan(int n){
    if(n<=1){
        return 1;
    }
    int res=0;
    for(int i=0;i<=n-1;i++){
        res+=catalan(i)* catalan(n-1-i);
    }
    return res;
}

int main(){
    cout<<catalan(4);
    return 0;
}