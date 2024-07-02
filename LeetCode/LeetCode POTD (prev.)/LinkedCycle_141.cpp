// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         // Create map table
//         map<ListNode*, bool> table;
//         ListNode* temp = head;

//         while(temp != NULL){
//             if(table[temp] == false){
//                 table[temp] = true;
//             }
//             else{
//                 return true;
//             }
//             temp = temp->next;
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast != NULL && fast ->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
 
            if(fast == slow)
                return true;
        }
        return false;
    }
};