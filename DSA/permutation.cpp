#include<bits/stdc++.h>
using namespace std;

//Without using inbuilt function find the permutaions
//vector<vector<int>> ans;
// void permute(vector<int> &a,int idx){
//     if(idx==a.size()){
//         ans.push_back(a);
//         return;
//     }
//     for(int i=idx;i<a.size();i++){
//         swap(a[i],a[idx]);
//         permute(a,idx+1);
//         swap(a[i],a[idx]);
//     }
//     return;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     for(auto &i :a){
//         cin>>i;
//     }
//     permute(a,0);
//     for(auto v:ans){
//         for(auto i:v){
//             cout<<i<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


//Shortcut Trick(using inbuilt function)
// int main(){
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     for(auto &i :a){
//         cin>>i;
//     }
//     sort(a.begin(),a.end());
//     do{
//         ans.push_back(a);
//     }while(next_permutation(a.begin(),a.end()));

//     for(auto v:ans){
//         for(auto i:v){
//             cout<<i<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


//Find unique possible permutations(Duplicate elements can be present)

void helper(vector<int> a,vector<vector<int>> &ans,int idx){
    if(idx==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i=idx;i<a.size();i++){
        if(i!=idx && a[i]==a[idx]){
            continue;
        }
        swap(a[i],a[idx]);
        helper(a,ans,idx+1);
    }
}

vector<vector<int>> permute(vector<int> nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    helper(nums,ans,0);
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a){
        cin>>i;
    }
    vector<vector<int>> res=permute(a);
    for(auto v:res){
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return 0;
}