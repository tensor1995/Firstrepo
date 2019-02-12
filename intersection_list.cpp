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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *listA = headA;
        ListNode *listB = headB;
        
        int lenA = 0;
        int lenB = 0;
        int diff;
        
        while(listA!=NULL){ 
            lenA++;
            listA = listA->next;
        }
        
        while(listB!=NULL){
            lenB++;
            listB = listB->next;
        }
        
        listA = headA;
        listB = headB;
        
        if( lenA > lenB ){
            diff = lenA - lenB;
            for(int i=0;i<diff;i++){
                listA = listA->next;
            }
        }
        else{
            diff = lenB - lenA;
            for(int i=0;i<diff;i++){
                listB = listB->next;
            }
        }
        
        while(listA!=listB){
            listA = listA->next;
            listB = listB->next;
        }
        return listA;
       
    }
};
