//Maximum possible sum of subarrays of a given array

//Brute force approach

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxSum=INT_MIN;
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxSum=max(maxSum,sum);
        }
    }
    cout<<maxSum<<endl;

    return 0;
}

//Cumulative Sum approach

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int currsum[n+1];
//     currsum[0]=0;

//     for(int i=1;i<=n;i++){
//         currsum[i]=currsum[i-1]+arr[i-1];
//     }

//     int maxsum=INT_MIN;
//     for(int i=1;i<=n;i++){
//         int sum=0;
//         for(int j=0;j<i;j++){
//             sum=currsum[i]-currsum[j];
//             maxsum=max(maxsum,sum);
//         }
//     }

//     cout<<maxsum<<endl;
//     return 0;
// }

//Kadane's Algorithm

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int currsum=0;
//     int mxsum=INT_MIN;

//     for(int i=0;i<n;i++){
//         currsum+=arr[i];
//         if(currsum<0){
//             currsum=0;
//         }
//         mxsum=max(mxsum,currsum);
//     }
//     cout<<mxsum<<endl;
    
//     return 0;
// }