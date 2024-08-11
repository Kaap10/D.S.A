class Solution {
public:
    int countGoodNodes(vector<vector<int>>& edges) {
        int n = edges.size() + 1; 
        vector<vector<int>> tree(n); 
        vector<int> subtree_size(n, 0); 
        int good_nodes = 0;
        
        for (const auto& edge : edges) {
            int u = edge[0], v = edge[1];
            tree[u].push_back(v);
            tree[v].push_back(u);
        }
        
        function<void(int, int)> dfs = [&](int node, int parent) {
            subtree_size[node] = 1; 
            unordered_set<int> child_sizes; 
            
            for (int child : tree[node]) {
                if (child == parent) continue; 
                
                dfs(child, node); 
                subtree_size[node] += subtree_size[child]; 
                child_sizes.insert(subtree_size[child]); 
            }
            
            if (child_sizes.size() <= 1) {
                good_nodes++;
            }
        };
        
        dfs(0, -1);
        
        return good_nodes;
    }
};
