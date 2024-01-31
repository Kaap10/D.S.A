//Remove all adjacent duplicates in string
class Solution{
    public:
    string removeDuplicates(string s) {
        string temp = "";
        int n = s.length();
        int i=0;

        while(i<n) {
            if(temp.length()>0 && s[i]==temp[temp.length()-1]) {
                temp.pop_back();
            }

            else {
                temp.push_back();   
            }
            i++;
        }
        return temp;
    }
}
//Linked List cycle II (return the node from where cycle starts)
class Solution{
    public:
        Node* slow = head;
        Node* fast = head;

        while(fast!=NULL) {
            fast = fast -> next;
            if(fast!-NULL) {
                fast = fast -> next;
                slow = slow -> next;
            }

            if(slow==fast) {
                break;
            }
        }

        if(fast==NULL) {
            return fast;
        }

        slow = head;
        while(fast!=slow) {
            slow = slow->next;
            fast= fast-> next;
        }
        return slow;
}

// Remove all occurences of a substring
class Soution{
    public:

    string removeOccurence(string s, string part) {
        while(s.find(part) != string::npos) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
}