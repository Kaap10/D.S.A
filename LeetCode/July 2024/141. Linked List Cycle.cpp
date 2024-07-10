class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        unordered_map<ListNode*, int> mp;

        while(temp!=NULL) {
            if(mp.find(temp)!=mp.end()) {
                return true;
            }

            mp[temp] = 1;
            temp = temp -> next;
        }

        return false;
    }
};

//method 2
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL) {
            slow = slow -> next;
            fast = fast ->next->next;

            if(slow == fast) return true;
        }

        return false;
    }
};

//method-2
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
     ListNode* temp = head;
    
     unordered_map<ListNode*, int> mp;
    
    while(temp!=NULL){
        if(mp.count(temp)!=0){
            return temp;
        }
        mp[temp] = 1;
        temp = temp->next;
    }
    return nullptr; 
    }
};

