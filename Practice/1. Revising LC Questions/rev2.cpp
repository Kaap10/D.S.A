//15 Question target
// -> find the middle of linked list 
/* Two approaches (i) -> get length and mid of LL
(ii) -> get middle of LL

2nd approach -> hair and tortoise algorithm*/

//approach-1
int getLL(Node* head) {
    Node* temp = head;
    int count = 0;

    while(temp!=NULL) {
        count++;
        temp = temp -> next;
    }
    return count;
}

//main
Node* getMiddle(Node* head) {
    int length = getLL(head); //for gettng the length of LL thats why we made a new fucntion above
    int currPos = 1;
    Node* temp = head;
    mid = (length/2) +1;

    while(mid!=currPos) {
        currPos++;
        temp = temp -> next;
    }
    return temp;
}


// hair and tortoise algorithm
//slow will move one step -> when fast will move two steps

Node* middleLL(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL) {
        fast = fast -> next;
        if(fast!=NULL) { //will check that if fast is Null or not, if it is NULL then fast will not move, and if fast will not move then slow will also not move 
            fast = fast -> next; 
            slow = slow -> next;
        }
    }
    return slow;
}

//find the pivot index (leftsum should be equal to rightSum)

int pivotIndex(vector<int> &nums) {
    int n = nums.size();
    int leftSum = 0;
    int rightSum = 0;

    for(int i=0; i<n; i++) {
        rightSum = rightSum + nums[i];
    }

    for(int i=0; i<n; i++) {
        rightSum = rightSum - nums[i];
    }

    if(leftSum == rightSum) {
        return i;
    }

    leftSum = leftSum + nums[i];
}
return -1;

//sqrt(x)

int sqrtx(int x) {
    //using search space concept
    int start = 0;
    int end = x;
    long long mid = start + (end-start)/2; //we have to use long long instead of int

    int ans = -1; //garbage value avoid krne ke liye

    while(start<=end) {
        if(mid*mid == x) {
            return mid;
        }

        else if(mid*mid > x) {
            end = mid-1;
        }

        else if(mid*mid < x) {
            ans = mid; //aage badhne ke liye pehle ans ko store kroge
            start = mid+1;
        }
        mid = start + (end-start)/2; // update mid value
    }
    return ans; // return the stored answer
}