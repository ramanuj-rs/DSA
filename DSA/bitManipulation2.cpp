//Check a given number is power of two using bit manipulation

#include<iostream>
using namespace std;

/* bool ispower2(int n){
    return (n && !(n & n-1));
}

int main(){
    cout<<ispower2(16)<<endl;
    return 0;
} */

//Count the number of ones in a binary representation of a number
int countone(int n){
    int count=0;
    while(n){
        n=n & n-1;
        count++;
    }
    return count;
}    

int main(){
    cout<<countone(13)<<endl;
    return 0;
}



