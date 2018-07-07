#include <iostream>
#include <ctype.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node*right;
};

Node* newNode(int data){
    Node *node = new Node;
    node->data = data;
    node->left=NULL;
    node->right=NULL;

    return(node);
}

int add_binarytree(Node *node){
    if(!node)
        return 0;
    else
        return(node->data + add_binarytree(node->left)+ add_binarytree(node->right));
}

int main(void)
{
     Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(8);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);

    int sum = add_binarytree(root);

    cout <<"Sum"<<sum;
}
