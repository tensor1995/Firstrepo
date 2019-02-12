/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if ( head == nullptr)
            return NULL ;
        
        ListNode *f_ptr = head;
        ListNode *s_ptr = head;
        
        while( f_ptr && s_ptr && f_ptr->next){
            
            s_ptr = s_ptr->next ; // move 1 step
            f_ptr = f_ptr->next->next; //  move 2 steps
            
            if( s_ptr == f_ptr )
                return true;
        }
        return false;
        
    }
};
