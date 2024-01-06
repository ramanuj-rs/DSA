//Reversing K node in a linked list
//input: 1->2->3->4->5->6
//Output: 2->1->4->3->6->5

#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data=val;
            next=NULL;
        }
};

//Insert at last
void insertAtEnd(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

//Reverseing of linked list
node* reverseK(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;//Incrementing current to g ahead the linked list
        currptr->next=prevptr;//Changing link
        prevptr=currptr;//Incrementing the pointer
        currptr=nextptr;//Incrementing the pointer
        count++;
    }
    if(nextptr!=NULL){
        head->next=reverseK(nextptr,k);
    }
    return prevptr;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head=NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    insertAtEnd(head,6);
    int k=2;
    node* newhead=reverseK(head,k);
    display(newhead);
    return 0;
}