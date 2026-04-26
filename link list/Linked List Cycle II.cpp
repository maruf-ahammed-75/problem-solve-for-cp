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
        ListNode* slow = head;
        ListNode* fast = head;

        bool iscycle = 0;

        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next;
            fast = fast->next;
            if(fast == slow){
                iscycle = 1;
                break;
            }
        } 
        if(iscycle){
            slow = head;
            while(slow!=fast){
                slow = slow->next;
                fast = fast->next;
            }
            return fast;
        }
        else return NULL;
    }
};