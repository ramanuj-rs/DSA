//Palindrom

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    bool check=1;

    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            check=0;
            break;
        }
    }
    if(check){
        cout<<"Palindrom";
    }
    else{
        cout<<"Not palindrom";
    }

    return 0;
} */

//Find largest word in a sentense

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore(); //To clear the buffer

    int i=0;
    int currlen=0,maxlen=0;
    int st=0,maxst=0;
    while(1){

        if(arr[i]== '\0' || arr[i]==' '){
            if(currlen>maxlen){
                maxlen=currlen;
                maxst=st;
            }
            currlen=0;
            st=i+1;
        }
        else{
            currlen++;
        }
        
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxlen<<endl;
    for(i=0;i<maxlen;i++){
        cout<<arr[i+maxst];
    }
    return 0;
} 

