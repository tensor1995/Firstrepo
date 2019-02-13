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
    ListNode* oddEvenList(ListNode* head) {
        
        if( head == NULL)
            return NULL;
        ListNode *oddList = NULL;
        ListNode *evenList = NULL;
        ListNode *currEven = NULL;
        
        oddList = head;
        currEven = evenList = head->next;
        
        while(evenList!=NULL && evenList->next!=NULL){
            
            oddList->next = evenList->next;
            oddList = evenList->next;
            
            evenList->next = oddList->next;
            evenList = oddList->next;
            
        }
        oddList->next = currEven;
        
        return head;
    }
};
