//Transpose

/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
} */

//Searching in 2D Array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int target;
    cin>>target;
    int r=0,c=2;
    bool flag=false;
    while(r<2 && c>=0){
        if(a[r][c]==target){
            flag=true;
        }
        if(a[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(flag){
        cout<<"Element found";
    }
    else{
        cout<<"Element does not exist";
    }
    
    return 0;
}
