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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0);
        ListNode* prev=dummy;
        ListNode* current;
        dummy->next=head;
        
        for(int i=0; i<left-1;i++){
            prev=prev->next;
        }
        current=prev->next;
        for(int i=0; i<(right-left) ; i++)
        {
            ListNode* temp=prev->next;
            prev->next=current->next;
            current->next=current->next->next;
            prev->next->next=temp;
        }
        
        return dummy->next;
    }
};