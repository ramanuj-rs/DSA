#include<iostream>
using namespace std;

//Remove all dulicates from the string using recursion
/* string removeDup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=removeDup(s.substr(1));

    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}

int main(){
    cout<<removeDup("aaaabbbeeecdddd");
    return 0;
} */

//Move all X to the end of the string
/* string moveallX(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=moveallX(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}

int main(){
    cout<<moveallX("xkfjxxkiaxkjsh");
    return 0;
} */

//Generate all substring of a given string 
/* void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
}

int main(){
    subseq("ABC","");
    cout<<endl;
    return 0;
} */


//Generate all substring of a given string with ASCII code
/* void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros,ans+to_string(code));
}

int main(){
    subseq("ABC","");
    cout<<endl;
    return 0;
} */


//Print all posible words from phone digit(keypad mobile)

string keypadArr[]={"","/","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code=keypadArr[ch-'0'];
    string ros=s.substr(1);

    for(int i=0;i<code.length();i++){
        keypad(ros,ans+code[i]);
    }

}

int main(){
    keypad("23","");
    return 0;
}