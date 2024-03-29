//Dequeue Concept
#include<bits/stdc++.h>
#include<deque>
using namespace std;

// int main(){
//     deque<int> dq;
//     dq.push_back(1);
//     dq.push_back(2);
//     dq.push_back(3);
//     dq.push_front(4);
//     for(auto i:dq){
//         cout<<i<<" ";
//     }cout<<endl;

//     dq.pop_back();
//     dq.pop_front();
//     for(auto i:dq){
//         cout<<i<<" ";
//     }
//     return 0;
// }


//Sliding window maximum
// int main(){
//     int n,k;
//     cin>>n>>k;
//     vector<int> a(n);
//     for(auto &i:a){
//         cin>>i;
//     }
//     multiset<int,greater<int>> s;
//     vector<int> ans;
//     for(int i=0;i<k;i++){
//         s.insert(a[i]);
//     }
//     ans.push_back(*s.begin());
//     for(int i=k;i<n;i++){
//         s.erase(s.lower_bound(a[i-k]));
//         s.insert(a[i]);
//         ans.push_back(*s.begin());
//     }

//     for(auto i:ans){
//         cout<<i<<" ";
//     }
//     return 0;
// }



//Using Dequeu approach
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    deque<int> q;
    vector<int> ans;
    for(int i=0;i<k;i++){
        while(!q.empty() and a[q.back()]<a[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);
    for(int i=k;i<n;i++){
        if(q.front()==i-k){
            q.pop_front();
        }
        while(!q.empty() and a[q.back()]<a[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}

