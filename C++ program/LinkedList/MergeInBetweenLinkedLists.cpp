
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*p,*q,*r;
        p = list1;
        q=list1;
        r=list2;
        while(r->next!=NULL){
            r = r->next;
        }
        a= a-1;
        while(a>0)
        {
            p = p->next;
            a--;
        }
        b=b+1;
        while(b>0){
            q = q->next;
            b--;
        }
        p->next = list2;
        r->next = q;
        return list1;
    }
};