#include<iostream>
using namespace std;

int Sum(int n){
    if(n==0){
        return 0;
    }

    int prevsum=Sum(n-1);
    return (n+prevsum);
}

int power(int n,int p){
    if(p==0){
        return 1;
    }
    int prevpower=power(n,p-1);
    return (n*prevpower);
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    int ans=factorial(n-1);
    return (n*ans);
}

//print nth fibonacci number
int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return (fibonacci(n-1)+fibonacci(n-2));
}

int main(){
    int n,p;
    cin>>n;
    cin>>p;
    cout<<Sum(n)<<endl;
    cout<<power(n,p)<<endl;
    cout<<factorial(n)<<endl;
    cout<<fibonacci(n)<<" ";

    return 0;
}