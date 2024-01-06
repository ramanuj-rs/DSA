//Zig Zag Traversal of BST
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

void ZigZag(Node* root){
    if(root==NULL){
        return;
    }

    stack<Node*> currLevel;
    stack<Node*> nextLevel;

    bool leftToRight=true;
    currLevel.push(root);

    while(!currLevel.empty()){
        Node* temp=currLevel.top();
        currLevel.pop();
        if(temp){
            cout<<temp->data<<" ";
        
            if(leftToRight){
                if(temp->left){
                    nextLevel.push(temp->left);
                }
                if(temp->right){
                    nextLevel.push(temp->right);
                }
            }
            else{
                if(temp->right){
                    nextLevel.push(temp->right);
                }
                if(temp->left){
                    nextLevel.push(temp->left);
                }
            }
        }
        if(currLevel.empty()){
            leftToRight=!leftToRight;
            swap(currLevel,nextLevel);
        }
    }
}

int main(){
    Node* root=new Node(5);
    root->left=new Node(3);
    root->right=new Node(6);
    root->left->left=new Node(2);
    root->left->right=new Node(4);
    ZigZag(root);
    return 0;
}