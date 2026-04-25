// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* temp = head;
//         int total =0;
//         while(temp != NULL){
//             temp=temp->next;
//             total++;
//         }

//         int mid = total/2 ;
//         temp = head;
//         for(int i=0 ; i<mid ; i++){
//             temp=temp->next;
//         }
//         return temp;
//     }
// };


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast != NULL){
            fast = fast->next;
            

            if(fast!=NULL)fast = fast->next;
            else break;
            if (fast != NULL) {
                cout << "fast val = "<<fast->val<<endl;
            } 
            slow = slow->next;
            cout<<"slow val = "<<slow->val<<endl;
        }
        return slow;
    }
};