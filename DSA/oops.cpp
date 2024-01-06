#include<bits/stdc++.h>
using namespace std;

class student{
    public:  //By default data members of a class are private
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
        cout<<"Gender="<<gender<<endl;
    }
};
//We can access class's private data member by writting a function
// class student{
//     string name;
//     void setName(string s){
//         name=s;
//     }
// };

// We can also access by using constructor
// class student{
//     string name;
//     student(string s){
//         name=s;
//     } //Parameterized Constructor

//     student(){
//         cout<<"Default constructor";
//     }

//     student(student &a){
//         name=a.name;
//     }
// };

// int main(){
//     student a("Ram");
//     student b=a;//Calling copy Constructor
//     return 0;
// }

int main(){
    // student a;
    // a.name='Ram';  //we can make it using array
    // return 0;

    student arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i].name;
        cin>>arr[i].age;
        cin>>arr[i].gender;
    }

    for(int i=0;i<3;i++){
        arr[i].printInfo();
    }
}