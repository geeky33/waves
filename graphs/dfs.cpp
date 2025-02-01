#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void dfs(int node, vector<int> adj[], int vis[], vector<int> &ls) {
        vis[node] = 1;
        ls.push_back(node);
        // Traverse all its neighbours
        for (auto it : adj[node]) {
            if (!vis[it]) {
                dfs(it, adj, vis, ls);
            }
        }
    }

public:
    // Function to return a list containing the DFS traversal of the graph
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V] = {0}; // Initialize visited array with 0
        int start = 0;
        vector<int> ls; // List to store the DFS traversal
        dfs(start, adj, vis, ls); // Start DFS from node 0
        return ls;
    }
};