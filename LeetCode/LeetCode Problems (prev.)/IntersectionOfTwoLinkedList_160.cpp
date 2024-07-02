/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* listA = headA;
        ListNode* listB = headB;

        while(listA->next != NULL && listB->next != NULL) {
            if(listA == listB) {
                return listA;
            }
            listA = listA->next;
            listB = listB->next;
        }

        if(listA->next==NULL) {
            int listBLength = 0;
            while(listB->next!=0) {
                listBLength++;
                listB = listB->next;
            }

            while(listBLength--) {
                headB = headB -> next;
            }
        }

        if(listB->next == NULL) {
            int listALength = 0;
            while(listA->next != 0) {
                listALength++;
                listA = listA->next;
            }
            while(listALength--) {
                headA = headA->next;
            }
        }

        while(headA!=headB) {
            headA = headA -> next;
            headB = headB -> next;
        }
        return headA;
    }
};