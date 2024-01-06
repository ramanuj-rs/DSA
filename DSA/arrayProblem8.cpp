//Pair sum problem
//Brute force approach 

#include<bits/stdc++.h>
using namespace std;

//Brute force approach

// bool pairsum(int arr[],int n,int k){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==k){
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

//Other approach

bool pairsum(int arr[],int n,int k){
    int high=n-1;
    int low=0;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }

        else if(arr[low]+arr[high]>k){
            high--;
        }

        else{
            low++;
        }
    }
    return false;
}

int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    cout<<pairsum(arr,n,k)<<endl;

    return 0;
}