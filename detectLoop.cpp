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
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *s_ptr = head;
        ListNode *f_ptr = head;
        
        if ( head == nullptr || head->next == nullptr)
            return NULL;
        
        while( s_ptr && f_ptr && f_ptr->next){
            s_ptr = s_ptr->next;
            f_ptr = f_ptr->next->next;
            
            if( s_ptr == f_ptr )
                break ;
        }
        
        if( s_ptr!=f_ptr )
            return NULL;
        
        s_ptr = head;
        while(s_ptr!=f_ptr){
            s_ptr = s_ptr->next;
            f_ptr = f_ptr->next;
        }
        
        return s_ptr;
        
        
    }
};
