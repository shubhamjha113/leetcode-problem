
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int count=0;
        while(temp){
            count++;
            temp = temp->next;
        }
        temp = head;
        count /=2;
        while(count--){
            temp = temp->next;
        }
        return temp;
    }

    
};