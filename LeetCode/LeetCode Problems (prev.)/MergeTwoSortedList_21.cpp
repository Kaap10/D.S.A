class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        ListNode* ans = new ListNode(-1);
        ListNode* mptr = ans;

        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                mptr->next = list1;
                mptr = list1;
                list1 = list1->next;
            }
            else{
                mptr->next = list2;
                mptr = list2;
                list2 = list2->next;
            }
        }

        if(list1 != NULL){
            mptr->next = list1;
            // mptr = list1;
            // list1 = list1->next;
        }

        if(list2 != NULL){
            mptr->next = list2;
            // mptr = list2;
            // list2 = list2->next;
        }

        return ans->next;
    }
};