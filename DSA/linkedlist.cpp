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

//Insert at begining 
void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

//Print Linked list
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

//Searching in linked list
bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

//Deletion at any position(Covers all corner cases)
void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    // if(head->next==NULL){
    //     deleteAtHead(head);
    //     return;
    // }

    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}

//Deletion at begining
void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}

int main(){
    node* head=NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtHead(head,4);
    display(head);
    cout<<search(head,2)<<endl;
    deletion(head,2);
    display(head);
    deleteAtHead(head);
    display(head);

    return 0;
}

