//APPROACH - 1
//Get the Length and Get the Mid of LL
// class Solution {
// public:

//     int getLL(ListNode* head) {
//         ListNode* temp = head;
//         int count = 0;

//         while(temp!=NULL) {
//             count++;
//             temp = temp->next;
//         }
//         return count;
//     }

//     ListNode* middleNode(ListNode* head) {
//         int length = getLL(head);
//         int mid = (length/2) + 1;
//         int currPos = 1;
//         ListNode* temp = head;

//         while(mid!=currPos) {
//             currPos++;
//             temp = temp->next;
//         }
//         return temp;
//     }
// };

//APPROACH-2
//Hare & Tortoise Algorithm

class Solution{
    public:

    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL) {
            fast= fast->next;
            if(fast!=NULL) {
                fast = fast -> next;

                slow = slow ->next;
            }
        }
        return slow;
    }
};