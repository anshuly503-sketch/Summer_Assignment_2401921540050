class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length =0;
        ListNode* temp= head;

        while(temp != nullptr){
            length++;
            temp =temp->next;
        }
        if(length ==n) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        int pos = length - n;
        temp= head;
        for (int i = 1; i < pos; i++){
            temp = temp->next;
        }
        ListNode* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
        return head;
    }
};
