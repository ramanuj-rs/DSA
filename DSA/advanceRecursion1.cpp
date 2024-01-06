#include<iostream>
using namespace std;

//Print all possible permutations of a given string 
/* void permutation(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutation(ros,ans+ch);
    }
}

int main(){
    permutation("ABC","");
    return 0;
} */

//Count the number of paths possible from start point to end point in Gameboard
/* int countPath(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count+=countPath(s+i,e);
    }
    return count;
}

int main(){
    cout<<countPath(0,3)<<endl;
    return 0;
} */


//Count the number of possible paths in a maze(maze without obstacles here)
int countPathMaze(int n,int i,int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    return (countPathMaze(n,i+1,j)+countPathMaze(n,i,j+1));
}

int main(){
    cout<<countPathMaze(3,0,0)<<endl;
    return 0;
}