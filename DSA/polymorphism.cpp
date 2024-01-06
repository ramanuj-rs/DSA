#include<bits/stdc++.h>
using namespace std;

//Function overloading(Compile time plymorphism)
// class A{
//     public:
//         void fun(){
//             cout<<"Function with no arguments"<<endl;
//         }
//         void fun(int n){
//             cout<<"Function with int argumnets"<<endl;
//         }
//         void fun(double n){
//             cout<<"Function with double argumnets"<<endl;
//         }
// };

// int main(){
//     A obj;
//     obj.fun();
//     obj.fun(5);
//     obj.fun(10.5);
//     return 0;
// }


//Operator overloading(Compile time polymorphism)
// class Complex{
//     private:
//         int real,img;
//     public:
//         Complex(int r=0,int i=0){
//             real=r;
//             img=i;
//         }
//     Complex operator + (Complex const &obj){
//         Complex res;
//         res.img=img+obj.img;
//         res.real=real+obj.real;
//         return res;
//     }
//     void display(){
//         cout<<real<<"+ i"<<img<<endl;
//     }
// };

// int main(){
//     Complex c1(10,5),c2(12,7);
//     Complex c3=c1+c2;
//     c3.display();
//     return 0;
// }


//Function overriding(Runtime polymorphism)
class base{
    public:
        virtual void print(){
            cout<<"This is base class's print function"<<endl;
        }
        void display(){
            cout<<"This is base class's display function"<<endl;
        }
};

class derived:public base{
    public:
        void print(){
            cout<<"This is derived class's print function"<<endl;
        }
        void display(){
            cout<<"This is derived class's display function"<<endl;
        }
};

int main(){
    base *baseptr;
    derived d;
    baseptr=&d;
    baseptr->print();
    baseptr->display();
}