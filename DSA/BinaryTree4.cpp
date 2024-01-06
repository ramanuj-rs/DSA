#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

//Count the No. of nodes in a binary tree
int countNode(Node* root){
    if(root==NULL){
        return 0;
    }
    return countNode(root->left)+countNode(root->right)+1;
}

//Find the sum of all nodes in a binary tree
int countSum(Node* root){
    if(root==NULL){
        return 0;
    }
    return countSum(root->left)+countSum(root->right)+root->data;
}


int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<countNode(root)<<endl;
    cout<<countSum(root);
    return 0;
}