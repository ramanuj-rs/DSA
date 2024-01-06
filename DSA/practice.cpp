// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,3,4,5,7};
//     for(int i=0;i<5;i++){
//         for(int j=i;j<5;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<arr[k];
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }


//Max pair sum problem
//Cumuative sum apprach
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={-1,4,7,2};
//     int currsum[5];
//     currsum[0]=0;
//     for(int i=1;i<=4;i++){
//         currsum[i]=currsum[i-1]+arr[i-1];
//     }
//     int maxsum=INT_MIN;
//     for(int i=1;i<=4;i++){
//         int sum=0;
//         for(int j=0;j<i;j++){
//             sum=currsum[i]-currsum[j];
//             maxsum=max(maxsum,sum);
//         }
//     }
//     cout<<maxsum;
//     return 0;
// }


//Kadane's Algorithm
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={-1,4,7,2};
//     int currsum=0;
//     int maxsum=INT_MIN;
//     for(int i=0;i<4;i++){
//         currsum+=arr[i];
//         if(currsum<0){
//             currsum=0;
//         }
//         maxsum=max(currsum,maxsum);
//     }
//     cout<<maxsum;
//     return 0;
// }

