//Hashing using stl

/*
        Maps                   |       Unordered Maps       
                               |
1.Insertion=>O(logn)           |     1.Insertion=>O(1)
                               |
2.Accessing=>O(logn)           |     2.Accessing=>O(1)
                               |
3.Deletion=>O(logn)            |     3.Deletion=>O(n)
                               |
4.Implemented using red black  |     4.Implemented using Array of buckets
tree                           |

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> m;
    m[8]=2;
    cout<<m[8]<<endl;
    return 0;
}