//Heaps using stl;

#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int,vector<int>> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    priority_queue<int,vector<int>,greater<int>> pqm;
    pqm.push(1);
    pqm.push(2);
    pqm.push(3);
    pqm.push(4);
    pqm.push(5);
    cout<<pqm.top()<<endl;
    pqm.pop();
    cout<<pqm.top()<<endl;

}