/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        stack<int>st;
        while(temp!=NULL) {
            st.push(temp->val);
            temp=temp->next;
        }

        temp = head;

        while(temp!=NULL) {
            temp->val = st.top();
            st.pop();
            temp = temp->next;
        }

        return head;
    }
};

//approach-2
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;

        while(temp!=NULL) {
            ListNode* front = temp->next;
            temp -> next = prev;
            prev = temp;
            temp = front;
        }

        return prev;
    }
};

//recursive appraoch