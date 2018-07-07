#include <iostream>
#include <ctype.h>

using namespace std;

struct Node{
  int data;
  Node *left;
  Node *right;
};

int sum(Node *node)
{
    if(!node)
        return 0;
    else
        return sum(node->right) + node->data + sum(node->left);

}


int SumTree(Node *node)
{
    if(node == NULL || (node->left==NULL && node->right==NULL ))
        return 1;

    int left_sum = sum(node->left);
    int right_sum = sum(node->right);

    if(left_sum+right_sum == node->data && SumTree(node->left) && SumTree(node->right))
        return 1;
    else
        return 0;
}

Node* CreateNode(int data){
    Node *node = new Node;
    node->data = data;
    node->left=NULL;
    node->right=NULL;

    return(node);
}

int main()
{
    Node *root  = CreateNode(26);
    root->left         = CreateNode(10);
    root->right        = CreateNode(3);
    root->left->left   = CreateNode(4);
    root->left->right  = CreateNode(6);
    root->right->right = CreateNode(3);

    if(SumTree(root))
        cout << "A Sumtree Found" ;
    else
        cout << "NOT FOUND";

        return 0;

}
