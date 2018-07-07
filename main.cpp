#include <iostream>
#include <ctype.h>

using namespace std ;

struct Node{      /**Node Struct*/
    int data;
    Node *left;
    Node *right;
};

Node *Create_Node( int data) /**Node Creation*/
{
    Node *node = new Node;
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

int check_Mirror_Tree(Node *node_1,Node *node_2)
{

    /*if node_1 is NULL and node_2 is also NULL then return True.Because null nodes are also mirror of each other*/
    if((!node_1) && (!node_2))
        return 1;
    /* if any of them is NULL then return False*/
    if((!node_1) || (!node_2))
        return 0;
    /* if the data are equal then check recursively */
    if(node_1->data == node_2->data)
    {
        if(check_Mirror_Tree(node_1->left,node_2->right) && check_Mirror_Tree(node_1->right,node_2->left))
            return 1;
    }

    return 0;
}

int main()
{
    Node *a = Create_Node(1);
    Node *b = Create_Node(1);
    a->left = Create_Node(2);
    a->right = Create_Node(3);
    a->left->left  = Create_Node(4);
    a->left->right = Create_Node(5);

    b->left = Create_Node(3);
    b->right = Create_Node(2);
    b->right->left = Create_Node(5);
    b->right->right = Create_Node(6);

    check_Mirror_Tree(a,b)? cout<< "Yes" : cout<< "NO";
    return 0;
}
