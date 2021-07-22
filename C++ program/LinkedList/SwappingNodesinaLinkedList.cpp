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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<ListNode*> vect;
        ListNode* tmp=head;
        while(tmp)
        {
            vect.push_back(tmp);
            tmp=tmp->next;
        }
        int t1=vect[k-1]->val;
        vect[k-1]->val=vect[vect.size()-k]->val;
        vect[vect.size()-k]->val=t1;
        // swap(vect[k-1]->val,vect[vect.size()-k]->val);
        return head;
    }
};