//  <IMPLEMENTATION OF BINARY SEARCH TREE>

#include <iostream>
#include <string>
using namespace std;
struct BstNode{
    int data;
    BstNode* left;
    BstNode* right;
}

BstNode* GetNewNode(int data){
    BstNode* newNode = new BstNode();
    newNode->data=data;
    newNode->left = newNode->right=NULL;
    return newNode;
}

BstNode* Insert(BstNode* root,int data){
    if(root == NULL){
        root = GetNewNode(data);
    }
    else if(data<=root->data){
        root->left=Insert(root->left,data);
    }
    else{
        root->right =Insert(root->right,data);
    }
   
}

bool Search(BstNode* root,int data){
    if(root==NULL){
        return false;
    }
    else if(root->data==data){
        return true;
    }
    else if(data>=root->data){
        return Search(root->left,data);
    }
    else{
        return Search(root->right,data);
    }
}
int main(){
    BstNode* root = NULL;
    root=Insert(roo,15);
    root=Insert(root,10);

    root=Insert(root,5);
    root=Insert(root,20);
    root=Insert(root,25);
       
    int nuber;
    cout<<"Enter number to be searched:"<<endl;
    cin>>number;

if(Search(root,nuber)==true){
cout<<"FOUND"<<endl;
}
else{
    cout<<"NOT FOUND"<<endl;   
}
}








