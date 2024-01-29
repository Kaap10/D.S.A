#include<iostream>
#include<string>
using namespace stdd;

//40 (Sort Colors)
// class Solution{
//     public:
//     void sortColors(vector<int> &nums) {
//         //we will use two pointer approach

//         int n = nums.size();
//         int start = 0;
//         int end = n-1;
//         int index = 0;

//         while(start<=end) {
//             if(nums[index]==0) {
//                 swap(nums[index], nums[start]);
//                 start++;
//                 index++;
//             }

//             else if(nums[index]==1) {
//                 index++;
//             }

//             else if(nums[index]==2) {
//                 swap(nums[index], nums[end]);
//                 end--
//             }
//         }
//     }
// }

//Search in a 2D Matrix

// class Solution{
//     public:
//     //mereko t/f mai ans chaiye toh main fuction mai will use bool

//     bool searchIn2d(vector<int> &nums, int target) {
//         int rowSize = matrix.size();
//         int colSize = matric[0].size();
//         int matrixSize = rowSize * colSize;

//         int start=0;
//         int end = matrixSize-1;
//         int mid = start+ (end-start)/2;

//         while(start<=end) {
//             int rowIndex = mid / colSize;
//             int colIndex = mid % colSize;
//             int currentNumber = matrix[rowIndex][colIndex];

//             if(target == currentNumber) {
//                 return true;
//             }

//             else if(target>currentNumber) {
//                 start = mid+1;
//             }

//             else if(target<currentNumber) {
//                 end = mid-1;
//             }

//             mid = start+ (end-start)/2;
//         }
//         return false;
//     }
// }


// k-diff pairs in array
// class Solution{
//     public:

//     bool binarySeach(vector<int> &nums, int start, int target) {
//         int end = nums.size()-1;
//         while(start<=end) {
//             int mid = start + (end-start)/2;
//             if(nums[mid]==target) {
//                 return target;
//             }
//             else if(nums[mid]<target) {
//                 start = mid+1;
//             }
//             else if(nums[mid]>target) {
//                 end = mid-1;
//             }
//         }
//         return false;
//     }

//     int binarySortingSol(vector<int> &nums, int k) {
//         sort(nums.begin(), nums,end());
//         set<pair<int, int>>ans;
//         for(int i=0; i<nums.size(); i++) {
//             bool target = binarySeach(nums, i+1, nums[i]+k);

//             if(target) {
//                 ans.insert({nums[i], nums[i]+k});
//             }
//         }
//         return ans.size();
//     }

//     int findPairs(vector<int> &nums, int k) {
//         return binarySortingSol(nums, k);
//     }
// };

//FIND DUPLICATE NUMBER
class Solution{
    public:
    int findDuplicate(vector<int> &nums) {
        int n = nums.size();
        int ans = -1;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++) {
            if(nums[i] == nums[i+1]) {
                ans = nums[i];
            }
        }
        return ans;
    }
};

class Solution{
    public:
    int findDuplicate(vector<int> &nums) {
        while(nums[0]!=nums[nums[0]]) {
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
}

//Reverse Linkedlist
class solution{
    public:
    Node* reverseLL(Node* head){
        Node* prev = NULL;
        Node* curr = head;

        while(curr!=NULL) {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
};

//lowest common ancestor
public class{
    public:
    Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
        if(root==NULL) return NULL;
        if(root->val == p->val) return p;
        if(root->val == q->val) return q;
        Node* leftAns = lowestCommonAncestor(root->left, p, q);
        Node* rightAns = lowestCommonAncestor(root->right, p, q);

        if(leftAns == NULL && rightAns == NULL) return NULL;
        else if(leftAns == NULL && rightAns!=NULL) return rightAns;
        else if(leftAns != NULL && rightAns == NULL) return leftAns;
        else return root;
    }
}

//BALANCED BINARY TREE
class Solution{
    public:
    int height(Node* root) {
        if(root==NULL) {
            return 0;
        }

        //left or right ki height nikalenge
        int leftH = height(root->left);
        int rightH = height(root-> right);
        int finalH = max(leftH, rightH) +1;
        return finalH;
    }

    bool isBalanced(Node* root) {
        if(root==NULL) {
            return true;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root-> right);
        int diff = abs(leftHeight - rightHeight);
        int currentNode = (diff<=1);

        bool leftSubtree = isBalanced(root->left);
        bool rightSubtree = isBalanced(root->right);
        if(currentNode && leftSubtree && rightSubtree) {
            return true;
        }
        else {
            return false;
        }
    }
}

//Two sum
class Soution{
    public:
    vector<int> twoSum(vector<int> &nums, int target) {
        int n = nums.size();
        for(int i=0; i<n-1; i++) {
            for(int j=1; j<n; j++) {
                if(nums[i]+nums[j]==target) {
                    return {i,j};
                }
            }
        }
        return {};
    }
}

//Method2 - using Hashing
class Solution{
    public:
    vector<int> twoSum(vector<int> &nums, int target) {
        map<int, int>mpp;
        int n = nums.size();
        for(int i=0; i<n; i++) {
            int num = nums[i];
            int neededNum = target - num;
            if(mpp.find(neededNum) != mpp.end()) {
                return {mpp[needed], i};
            }
            mpp[num] = i;
        }
        return {-1,-1};
    }
}

//minimum number of pushes to type word I
int minPushses(string word) {
    int ans = 0;
    int n = word.length();
    int i=1;
    int j=1;
    while(i<=n) {
        ans = ans +j;
        if(i%8==0) {
            j++;
        }
        i++;
    }
    return ans;
}