#include <bits/stdc++.h>

using namespace std ;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *Create_Node(int data)
{
    Node *node = new Node;

    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return(node);

}

void Leaf_Node_Sum(Node *node,int *sum)
{
    if(!node)
        return;

    if((!node->left) && (!node->right))
    {
        *sum+=node->data;
    }

    Leaf_Node_Sum(node->left,sum);
    Leaf_Node_Sum(node->right,sum);
}

int main()
{
    int sum = 0;

    Node *node = Create_Node(1);
    node->left = Create_Node(2);
    node->left->left = Create_Node(10);
    node->left->right = Create_Node(20);
    node->right = Create_Node(3);
    node->right->right = Create_Node(40);
    node->right->left = Create_Node(30);
    node->right->left->right = Create_Node(50);

    Leaf_Node_Sum(node,&sum);

    cout << "The sum of Leaf Nodes " << sum ;
}
