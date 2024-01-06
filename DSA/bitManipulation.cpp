//Finding the bit at given position

#include<iostream>
using namespace std;

int getBit(int n,int pos){
    return ((n & (1<<pos))!=0);
}

int main(){
    cout<<getBit(5,2);

    return 0;
} 

//Set bit at given position

/*#include<iostream>
using namespace std;

int setBit(int n,int pos){
    return (n | (1<<pos));
}

int main(){
    cout<<setBit(5,1);

    return 0;
} */

//Clear bit at given position

/*#include<iostream>
using namespace std;

int clearBit(int n,int pos){
    int mask=~(1<<pos);

    return (n & mask);
} */

//Upadte bit at given position

/* int updateBit(int n,int pos,int value){
    int mask=~(1<<pos);
    n=n & mask;
    return (n | (value<<pos));
}

int main(){
    cout<<updateBit(5,1,1);

    return 0;
}  */
