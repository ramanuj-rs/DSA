#include<iostream>
#include<climits>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxNo=INT_MIN;
    for(int i=0;i<n;i++){
        maxNo=max(maxNo,arr[i]);
    }
    cout<<maxNo;

    return 0;
}