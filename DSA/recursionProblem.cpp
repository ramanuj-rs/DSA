#include<iostream>
using namespace std;

//Check if an array is sorted or not
/* bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }

    bool restArray=sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}

//Print numbers till n
//Decreasing order

void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}
//Increasing order
void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sorted(arr,n)<<endl;
    inc(n);
    cout<<endl;
    dec(n);
    return 0;

} */

//Find the first and last occurance of a number in an array

int firstocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restArray=lastocc(arr,n,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main(){
    int arr[]={4,2,1,2,5,2,7};
    cout<<firstocc(arr,7,0,2)<<endl;
    cout<<lastocc(arr,7,0,2);
}



