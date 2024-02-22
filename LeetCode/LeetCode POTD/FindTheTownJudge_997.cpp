
//APRAOCH-1 -> using two array
/* TC - O(2n) -> O(n)
SC - O(n)*/
// class Solution {
// public:
//     int findJudge(int n, vector<vector<int>>& trust) {
//         vector<int> indegree(n+1);
//         vector<int> outdegree(n+1);

//         for(vector<int> &vec : trust) {
//             int u = vec[0];
//             int v = vec[1];

//             outdegree[u]++;
//             indegree[v]++;
//         }
//         for(int i=1; i<=n; i++) {
//             if(indegree[i]==n-1 && outdegree[i]==0) {
//                 return i;
//             }
//         }
//         return -1;
//     }
// };

//APPRAOCH-2 -> using 1 array only
/* TC - O(n)
SC - O(n)*/

class Solution{
    public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> Count(n+1);
        for(vector<int> &vec : trust) {
            int u = vec[0];
            int v = vec[1];

            Count[u]--;
            Count[v]++;
        }

        for(int i=1; i<=n; i++) {
            if(Count[i]==n-1) {
                return i;
            }
        }
        return -1;
    }
};
