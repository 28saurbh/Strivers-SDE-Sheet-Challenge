#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode < T > *left;
        BinaryTreeNode < T > *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
void changeTree(BinaryTreeNode < int > * root) {
    if(root==NULL)
    return;
    int left=0;
    int right=0;
    if(root->left)
    left=root->left->data;

    if(root->right)
    right=root->right->data;
    if(left==0&&right==0)
    return;

    int sum=left+right;

    if(root->data<sum)
    {
        root->data=sum;
    }

    if(root->data>sum&&root->left!=NULL&&root->right!=NULL)
   {
        root->left->data=sum;
        root->right->data=root->data-sum;
   }
   else if(root->data>sum&&root->left==NULL&&root->right!=NULL)
   {
       root->right->data=root->data;
   }
   else if(root->data>sum&&root->right==NULL&&root->left!=NULL)
   {
       root->left->data=root->data;
   }

    changeTree(root->left);
    changeTree(root->right);
}  
