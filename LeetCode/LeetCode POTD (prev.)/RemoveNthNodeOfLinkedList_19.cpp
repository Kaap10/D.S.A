
//APPROACH-1 {Two Passes}
class Solution {
public:

    int LengthOfLL(ListNode* head) {
        int length = 0;

        while(head) {
            length++;
            head = head->next;
        }
        return length;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = LengthOfLL(head);

        if(length==n) {
            ListNode* temp = head->next;
            delete(head);
            return temp;
        }

        ListNode* temp = head;
        ListNode* prev = NULL;

        int travel = length-n;

        while(travel--) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = temp->next;
        delete(temp);
        return head;
    }
};

 //APPROACH-2 {One Passes}
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        for(int i = 1; i <= n; i++) {
            fast = fast->next;
        }
        if(fast == NULL) {
            return head->next;
        }
        
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
        
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete(temp);
        return head;
    }
};