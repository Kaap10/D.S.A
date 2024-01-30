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

//diameter of binary tree nikalne ke liye two methonds hai
// (i) baar baar diamter nikalan
// (ii) no overhead recursive call

int height(Node* root, int &diameter) {
    if(root==NULL) {
        return 0;
    }

    int LH = height(root->left, diameter);
    int RH = height(root->right, diameter);
    int maxHeight = max(LH, RH) +1;
    diameter = max(diameter, (LH+RH));
    return maxHeight;
}

int diameterOfBinaryTree(Node* root) {
    if(root==NULL) {
        return 0;
    }

    int diameter = 0;
    height(root, diameter);
    return diameter;
}

// also also we have brute force approach to solve this problem -> diameter of binary tree
int height(Node* root) {
    if(root==NULL) {
        return 0;
    }

    int LH = heigth(root->left);
    int RH = height(root->right);
    int finalHeight = max(LH, RH) +1;
    return finalHeight;
}

int diameterOfbinaryTree(Node* root) {
    if(root==NULL) {
        return 0;
    }

    int option1 = diameterOfBinaryTree(root->left);
    int option2 = diameterOfBinaryTree(root->right);
    int option3 = height(root->left) = height(root->right);
    int diameter = max(option1, max(option2, option3));
    return diameter;
}

//Missing term 
// approach -> missing term = total - sum
int MissingTerm(vector<int> &nums) {
    int n = nums.size();
    int sum = 0;

    for(int i=0; i<n; i++) {
        sum = sum + nums[i];
    }

    int totalSum = (n*(n+1)) /2;
    int missing_term = totalSum - sum;
    return missing_term;
}

//using XOr
int missingTerm(vector<int> &nums) {
    int n = nums.size();
    int xor_full = 0;
    int xor_array = nums[0];

    for(int i=1; i<n+1; i++) {
        xor_full = xor_full ^ i;
    }

    for(int i=1; i<n; i++) {
        xor_array = xor_array ^ nums[i];
    }

    return xor_full ^ xor_array;
}

//mereko row with maximum ones chaiye
//it means that i have return row index with maximum ones and total number of ones too
// target -> row index, total ones count

vector<int> RowWithMaxOnes(vector<vector<int>> &mat) {
    int n = nums.size();
    int row = mat.size();
    int col = col.size();

    int oneCount = INT_MIN;
    int rowNo = -1;

    vector<int> ans;
    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j=0; j<col; j++) {
            if(mat[i][j]==1) {
                sum++;
            }
        }


        if(sum>oneCount) {
            oneCount = sum;
            rowNo = i;
        }

    }

    ans.push_back(rowNo);
    ans.push_back(oneCount);
    return ans;
}

vector<int> RowWithMaxOnes(vector<vector<int>> &mat) {
    int row = mat.size();
    int col = mat[0].size();

    int maxOnes = 0;
    int maxRow = -1;

    for(int i=0; i<row; i++) {
        int ones = col - lower_bound(mat[i].begin(), mat[i].end(), 1);
        if(ones > maxOnes) {
            maxOnes = ones;
            maxRow = i;
        }
    }

    return {maxRow, maxOnes};
}

// Reverse K Group (hard)

class Solution{
    public:

    int getLength(Node* head) {
        Node* temp = head;
        int count = 0;

        while(temp!=NULL) {
            count++;
            temp = temp ->next;
        }
        return count;
    }

    Node* reverseKGroup(Node* head, int k) {
        int len = getLength(head);
        if(k>len) {
            return head;
        }

        Node* prev = NULL;
        Node* curr = head;
        Node* nextNode = curr -> next;

        int position = 0;

        while(position<k) {
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
            position++;
        }

        Node* recursionKaAns = NULL;
        if(nextNode!=NULL) {
            recursionKaAns = reverseKGroup(nextNode, k);
            head -> next = recursionKaAns;
        }
        return prev;
    }
};

//MINIMUM time to collect garbage
int garbageCollection(vector<string> &garbage, vector<string> &travel) {
    int pickM=0; int pickG=0; int pickP=0;
    int travelM=0; int travelG=0; int travelP=0;
    int lastM=0; int lastG=0; int lastP=0;

    for(int i=0; i<garbage.size(); i++) {
        string str = garbage[i];

        for(auto ch:str) {
            if(ch=='M') {
                pickM++;
                lastM = i;
            }

            if(ch=='P') {
                pickP++;
                lastP = i;
            }

            if(ch=='G') {
                pickG++;
                lastG = i;
            }
        }
    }

    for(int i=0; i<travelP; i++) {
        travelP = travelP + travel[i];
    }

    for(int i=0; i<travelG; i++) {
        travelG = travelG + travel[i];
    }

    for(int i=0; i<travelM; i++) {
        travelM = travelM + travel[i];
    }

    int finalAns = (pickM + travelM) + (pickG + travelG) + (pickP + travelP);
    return finalAns;
}

//Reaarange elements by sign
//pehle mereko ko +ve number chaiye, -ve number chaiye

class Soution{
    public:
    vector<int> reArrangeArray(vector<int> &nums) {
        int size = nums.size();
        vector<int> ans(size,0);

        int posIndex = 0;
        int negIndex = -1;

        for(int index=0; index<size; index++) {
            if(nums[index]>0) {
                ans[posIndex] = nums[index];
                posIndex = posIndex+2;
            }

            else if(nums[index]<0) {
                ans[negIndex] = nums[index];
                negIndex = negIndex +2;
            }
        }
        return ans;
    }
}

//COUNT primes
//using sieve of eratosthenes

class Solution{
    public:
    int countPrimes(int n) {
        if(n==0) return;

        vector<bool> prime(n, true);
        prime[0] = prime[1] = false;    

        int ans = 0;
        for(int i=2; i<n; i++) {
            if(prime[i]) {
                ans++;

                int j=2*i;
                while(j<n) {
                    prime[j] = false;
                    j = j+1;
                }
            }
        }
        return ans;
    }
}

//rotate array with k 
class Solution {
    public:
    void rotate(vector<int> &nums, int k) {
        int size = nums.size();

        vector<int> ans(size, 0);
        int index = 0;
        while(index<size) {
            int newIndex = (index+k) % size;
            ans[newIndex] = nums[index];
            index++;
        }
        nums = ans;
    }
};

//2nd approach of this is that
class Solution{
    public:
    void rotateArray(vector<int> &nums, int k) {
        int size = nums.size();
        k = k % size;

        reverse(nums.begin(), nums.begin()+(n-k));
        reverse(nums.begin()+(n-k), nums.end());
        reverse(nums.begin(), nums.end());
    }
};

//Majority element

class Solution {
    public:
    int majorityElement(vector<int> &nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int k = n-1;
        int midIndex = (0+k)/2;
        return nums[midIndex];
    }
}

//maximum depth of a bianry tree
class Solution{
    public:
    if(root==NULL) {
        return 0;
    }

    int leftNode = maxDepth(root->left);
    int rightNode = maxDepth(root->right);
    int height = max(leftNode, rightNode+1);
    return height;
}