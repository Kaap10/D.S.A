//two sum LC-1
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(); // nums ek array hai uska size store krliya 1 variable pe jo ki 'n' hai
        //ab mereko aise 2 index dhundna hai jiska sum target ke equal aata ho
        // toh 2 element ka use kruna 1st one index 0 se n-1 jayega and 2nd one 1 to n jayega
        //dono index ka number ka summation agar target ke equal hua toh return kra dunga dono element ko

        for (int i=0; i<n-1; i++) { //i ko iterate krunga from 0 to n-1
            for( int j=1; j<n; j++) { //j ko iterate krunga from 1 to n 
                if(nums[i]+nums[j]==target) { //dono index ke element ka summation agar target ke equal hoga toh dono idex return krdunga 
                    return {i,j}; //return kra diya dono 
                }
            }
        }
        return {};
    }
};

//use hashing
class Solution{
    public:
    vector<int> twoSum(vector<int> &nums, int target) {
        map<int, int> mp;
        int n = nums.size();
        for(int &i : nums) {
            int num = nums[i];
            int neededNum = target - num;

            if(mpp.find(neededNum) != mpp.end()) {
                return {mpp[neededNum], i};
            }
            mpp[num] = i;
        }
        return {-1,-1};
    }
}

//maximum depth of a binary tree
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL) {
            return 0;
        }

        int leftSubtree = maxDepth(root->left);
        int rightSubtree = maxDepth(root->right);
        int height = max(leftSubtree, rightSubtree) + 1;
        return height;
    }
};

//Path sum
class Solution {
public:

    //mujhe alag se sum lena hai toh, ek alag function banaunga and then vahan sum ko pass krdunga
    bool solve(TreeNode* root, int targetSum, int sum) {
        if(root==NULL) {
            return false;
        }

        sum = sum + root->val;
        if(root->left == NULL && root->right==NULL) {
            if(targetSum == sum) {
                return true;
            }
            else {
                return false;
            }
        }

        bool leftSub = solve(root->left, targetSum, sum);
        bool rightSub = solve(root->right, targetSum, sum);
        return leftSub || rightSub;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum = 0;
        bool ans = solve(root, targetSum, sum);
        return ans;
    }
};

//longest common prefic
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = ""; //qs mai given hai ki agar common prefix na aaye toh return ""
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string first = strs[0];
        string last = strs[n-1];

        for(int i=0; i<min(first.size(), last.size()); i++) {
            if(first[i]!=last[i]) {
                return ans;
            }
            ans = ans + first[i];
        }
        return ans;
    }
};

//remove duplicas from sorted array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // [1,1,2]
        int j = 1;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] != nums[i-1]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

//Number of changing keys
class Solution{
public:
    int countKeyChanges(string s) {
        int n= s.size();
        int count = 0;

        for(int i=0; i<n; i++) {
            if((s[i]-'a'==s[i-1]-'A') || (s[i]-'A'==s[i-1]-'s') || s[i]==s[i-1]) {
                c++;
            }
        }
        return n-1-count;
    }
}

//reverse only letters
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.size();
        int start = 0;
        int end = n-1;

        while(start<=end) {
            if(isalpha(s[start]) && isalpha(s[end])) {
                swap(s[start], s[end]);
                start++;
                end--;
            }

            else if(!isalpha(s[start])) {
                start++;
            }

            else if(!isalpha(s[end])) {
                end--;
            }
        }
        return s;
    }
};

class Solution {
public:

    void CreateUpdateMapping(string &str) {
        char start='a';
        char mapping[300] = {0};
        for(auto ch: str) {
            if(mapping[ch] == 0) {
                mapping[ch] = start;
                start++;
            }
        }

        for(int i=0; i<str.length(); i++) {
            char ch = str[i];
            str[i] = mapping[ch];
        }
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        CreateUpdateMapping(pattern);
        for(string str:words) {
            string tempStr = str;
            CreateUpdateMapping(tempStr);
            if(tempStr==pattern) {
                ans.push_back(str);
            }
        }
        return ans;
    }
};