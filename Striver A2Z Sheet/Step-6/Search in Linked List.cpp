class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        // Code here
        Node* current = head;
        
        while(current != NULL) {
            if(current->data==key) {
                return true;
            }
            
            current = current -> next;
        }
        
        return false;
    }
};