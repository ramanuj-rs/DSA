//Flatten a bnary tree
/*
Given a binary tree ,flatten into a linked list inplace.
After flattening ,left of each node should point to NULL
and right should contain next node in preorder sequence 
*/

/*
1.Recursively ,flatten the right subtree and left subtree.
2.Store the left tail and right tail. 
3.Store right subtree in 'temp' & make left subtree as right subtree
4.join right subtree with left tail.
5.return right tail.
*/

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left,* right;
    Node(int val){
        data=val;
        left=NULL;right=NULL;
    }
};

void flatten(Node* root){
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return;
    }

    if(root->left!=NULL){
        flatten(root->left);

        Node* temp=root->right;
        root->right=root->left;
        root->left=NULL;

        Node* t=root->right;
        while(t->right!=NULL){
            t=t->right;
        }
        t->right=temp;
    }
    flatten(root->right);
}

void inorderPrint(Node* root){
    if(root==NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main(){
    Node* root=new Node(4);
    root->left=new Node(9);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);
    flatten(root);
    inorderPrint(root);
    return 0;
}

