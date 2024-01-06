#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    //Different types of declaration

    string str;
    string str1(5,'n');
    cout<<str1;

    //Input
    getline(cin,str);
    cout<<str;

    //Append

    string s1="fam";
    string s2="ily";

    s1.append(s2);//Type1
    cout<<s1;

    cout<<s1+s2<<endl;//Type2 

    //Accessing particular charater

    cout<<s1[1]<<endl;

    //Clear Function
    string abc="ayuscgyus ccd nc dwjhkckbdcsdakcbsd cdcjkd";
    abc.clear();
    cout<<abc;

    //string comparison(to check equality)
    string st1="abc";
    string st2="abc";
    cout<<st2.compare(s1)<<endl;
    if(!st2.compare(s1)){
        cout<<"Strings are equal"<<endl;
    }

    //Empty Function
    string mno="ayuscgyus ccd nc dwjhkckbdcsdakcbsd cdcjkd";
    mno.clear();
    if(mno.empty()){
        cout<<"Empty String"<<endl;
    }

    //Erease function
    string name="Ramanuj";
    name.erase(3,2);     //3=Index from where we want to erease
    cout<<name<<endl;    //2=How many chracter we want to erease

    //Find Function
    string x="kcgdskcsdkjk";
    cout<<x.find("gd")<<endl;

    //Insert Function
    string y="scsdhkjshs";
    y.insert(2,"jsggjs");  //2=Position we want to insert
    cout<<y<<endl; 

    //Length/size
    cout<<y.size()<<endl;
    cout<<y.length()<<endl;

    for(int i=0;i<y.length();i++){
        cout<<y[i];
    } 

    //Substring function
    string z=y.substr(4,6);//4=start,6=end
    cout<<z<<endl;

    //String to Integer
    string strn="5126";
    int num=stoi(strn);
    cout<<num<<endl;

    //Integer to string
    int n=2867283746;
    cout<<to_string(n)+"131"<<endl;

    //Sorting
    string string1="wwegjcmsdfjhsufwu";
    sort(string1.begin(),string1.end());
    cout<<string1<<endl;

    return 0;
}