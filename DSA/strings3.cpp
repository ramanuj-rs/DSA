//Find the character with maximum frequency

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);

    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    
    for(int i=0;i<str.length();i++){
        freq[str[i]-'a']++;
    }

    char ans='a';
    
    for(int i=0;i<26;i++){
        int mxfreq=0;
        if(freq[i]){
            mxfreq=freq[i];
            ans=i+'a';
            cout<<ans<<mxfreq<<endl;
        }
    }

    return 0;
}