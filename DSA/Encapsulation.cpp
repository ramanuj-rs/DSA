#include<bits/stdc++.h>
using namespace std;

class A{
    private:
        int b;
        void funcB(){
            cout<<"Function B";
        }

    public:
        int a;
        void funcA(){
            cout<<"Function A";
        }

    protected:
        int c;
        void funcC(){
            cout<<"Function C";
        }
};

int main(){
    A obj;
    obj.funcA();
    return 0;
}