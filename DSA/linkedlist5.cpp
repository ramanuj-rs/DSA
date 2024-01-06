//Append last k nodes of a linked list
//input:1->2->3->4->5->6 & k=3
//output:6->5->4->3->2->1

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

int length(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node* kappend(node* &head,int k){
    node* newHead;
    node* newTail;
    node* temp=head;

    int l=length(head);
    k=k%l;
    int count=1;
    while(temp->next!=NULL){
        if(count==l-k){
            newTail=temp;
        }
        if(count==l-k+1){
            newHead=temp;
        }
        temp=temp->next;
        count++;
    }
    newTail->next=NULL;
    temp->next=head;
    return newHead;
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
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertAtEnd(head,arr[i]);
    }
    display(head);
    node* newHead=kappend(head,3);
    display(newHead);
    return 0;
}

