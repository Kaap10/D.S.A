class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>>  adj;
        vector<int> indegree(n);

        if(n==1) {
            return {0};
        }

        for(auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];

            indegree[u]++;
            indegree[v]++;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> result;

        queue<int> q;
        for(int i=0; i<n; i++) {
            if(indegree[i]==1) {
                q.push(i);
            }
        }

        while(n>2) {
            int size = q.size();
            n = n-size;

            while(size--) {
                int u = q.front();
                q.pop();

                for(int &v : adj[u]) {
                    indegree[v]--;
                    if(indegree[v] == 1) {
                        q.push(v);
                    }
                }
            }
        }

        while(!q.empty()) {
            result.push_back(q.front());
            q.pop();
        }

        return result;
    }
};