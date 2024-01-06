//Maximum circular subarray problem

#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[],int n){
    int currsum=0;
    int mxsum=INT_MIN;

    for(int i=0;i<n;i++){
        currsum+=arr[i];
        if(currsum<0){
            currsum=0;
        }
        mxsum=max(mxsum,currsum);
    }
    return mxsum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum=kadane(arr,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=totalsum+kadane(arr,n);
    cout<<max(nonwrapsum,wrapsum)<<endl;
    
    return 0;
}