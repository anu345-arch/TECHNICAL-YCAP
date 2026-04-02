class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        bool detect_cycle=false;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                detect_cycle=true;
                break;}}
        if(!detect_cycle){return NULL;}
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;}
        return slow;
        
    }
};
