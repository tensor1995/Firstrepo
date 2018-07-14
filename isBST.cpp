bool checkBST(Node* root) {

       return checkImproved(root,INT8_MIN,INT8_MAX);

	}

   bool checkImproved(Node *node,int8_t min,int8_t max)
   {
       if(node == NULL)  /** if its null then also its a binary search tree.*/
           return true;

       if(node->data >= max || node->data <= min)  checking bounds
           return false;

       return ( checkImproved(node->left,min,node->data) &&
               checkImproved(node->right,node->data,max) );
   }
