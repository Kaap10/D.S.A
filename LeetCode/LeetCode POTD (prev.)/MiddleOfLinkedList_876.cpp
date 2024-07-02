//APPROACH-1
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL) {
            fast = fast->next;
            if(fast!=NULL) {
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }
};

//APPRAOCH-2 (Better run time)
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL) {
            slow = slow ->next;
            fast = fast -> next -> next;
        }
        return slow;
    }
};

