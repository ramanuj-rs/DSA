//Construct BST from preorder
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left,*right;
    Node(int val){
        data=val;
        left=NULL;right=NULL;
    }
};

Node* constructBST(int preorder[],int* idx,int key,int min,int max,int n){
    if(*idx>n){
        return NULL;
    }
    Node* root=NULL;
    if(key>min & key<max){
        root=new Node(key);
        *idx=*idx+1;
        if(*idx<n){
            root->left=constructBST(preorder,idx,preorder[*idx],min,key,n);
        }
        if(*idx<n){
            root->right=constructBST(preorder,idx,preorder[*idx],key,max,n);
        }
    }
    return root;
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    int preorder[]={10,2,1,13,11};
    int n=5;
    int idx=0;
    Node* root=constructBST(preorder,&idx,preorder[0],INT_MIN,INT_MAX,n);
    inorder(root);
    return 0;
}