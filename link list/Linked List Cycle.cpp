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
        ListNode* temp = head;
        set<ListNode*>s;
        while(temp != NULL){
            if(s.find(temp->next)!=s.end()){
                for(auto i:s)cout<<i<<' ';
                cout<<endl;
                return true;
            }
            s.insert(temp->next);
            temp = temp->next;
        }
        for(auto i:s)cout<<i<<' ';
        cout<<endl;

        return 0;
    }
};