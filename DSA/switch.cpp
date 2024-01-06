#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Input a character"<<endl;
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"English"<<endl;
        break;
    
    case 'b':
        cout<<"Bengali"<<endl;
        break;
    
    case 'c':
        cout<<"Hindi"<<endl;
        break;
    
    case 'd':
        cout<<"Tamil"<<endl;
        break;
    
    default:
        cout<<"Nothing"<<endl;
        break;
    }
   
    return 0;
}