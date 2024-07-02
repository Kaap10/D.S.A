class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> mp;
        for (auto x : nums) ++mp[x];
        int mx = 0;
        for (auto [x, y] : mp) mx = max(mx, y);
        int res = 0;
        for (auto [x, y] : mp) if (mx == y) res += y;
        return res;
    }
};
// #include<iostream>

// using namespace std;

// class Solution {
// public:
//      int maxFrequencyElements(vector<int>& nums) {
//          vector<int> Snums = nums;
//          int n = Snums.size();
//          sort(Snums.begin(), Snums.end());
        
//          int maxFrequency = 0;
//          int currentFrequency=1;
//          for(int i=0; i<n; i++) {
//              if(Snums[i]==Snums[i-1]) {
//                  currentFrequency++;
//              } else {
//                  maxFrequency = max(maxFrequency, currentFrequency);
//                  currentFrequency = 1;
//              }
//          }
//          maxFrequency = max(maxFrequency, currentFrequency);
//                return maxFrequency;
        
//      }
//          int main() {
//              vector<int> nums = {1,2,2,3,5};
//              int output = maxFrequencyElements(nums);
//              cout << output;
             
//              return 0;
//          }
// };
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
// public:
//     int maxFrequencyElements(vector<int> &nums) {
//         nums = {1, 2, 2, 3, 1, 4};
//         sort(nums.begin(), nums.end());
//         int n = nums.size();
//         for(int i=0; i<n; i++) {
//             cout << count(nums.begin(), nums.end(),n);
//         }
//         return 0;
//     }
// };

// // #include <iostream>
// // #include <vector>
// // #include <algorithm>

// // using namespace std;

// int maxFrequencyElements(vector<int>& nums) {
//     // Sort the array
//     vector<int> sortedNums = nums;
//     sort(sortedNums.begin(), sortedNums.end());

//     int n = sortedNums.size();

//     int maxFrequency = 0;
//     int currentFrequency = 1;

//     // Count frequencies in a single pass
//     for (int i = 1; i < n; ++i) {
//         if (sortedNums[i] == sortedNums[i - 1]) {
//             // Increment frequency if the current element is the same as the previous one
//             currentFrequency++;
//         } else {
//             // Update maxFrequency and reset currentFrequency
//             maxFrequency = max(maxFrequency, currentFrequency);
//             currentFrequency = 1;
//         }
//     }

//     // Update maxFrequency for the last element
//     maxFrequency = max(maxFrequency, currentFrequency);

//     return maxFrequency;
// }

// int main() {
//     // Example 1
//     vector<int> nums1 = {1, 2, 2, 3, 1, 4};
//     int output1 = maxFrequencyElements(nums1);
//     cout <<output1 << endl;

//     // Example 2
//     vector<int> nums2 = {1, 2, 3, 4, 5};
//     int output2 = maxFrequencyElements(nums2);
//     cout <<output2 << endl;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// { 
    
//     int arr[] =  {1, 2, 3, 5, 2, 9, 7, 3, 5};
//      int n = sizeof(arr)/sizeof(arr[0]); 

//     int visited[n];

//     for(int i=0; i<n; i++)
//     {
//         if(visited[i]!=1)
//         {
//            int count = 1;
//            for(int j=i+1; j<n; j++)
//             {
//               if(arr[i]==arr[j])
//               {
//                  count++;
//                  visited[j]=1;
//               }
//             }
//             cout<<arr[i]<<" appears "<<count<<" times "<<endl;
//         }
//      }

//     return 0; 
// }
