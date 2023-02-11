class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* t1 = head;
        ListNode* t2 = head;
        int c=0 , c1=0;

        while(t1!=NULL){
            t1 = t1->next;
            c++;
        }
        

        while(c1<c/2){
            t2=t2->next;
            c1++;

        }

        return t2;
    }
};
