#include <stack>
class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int> informTimeStacked(n, 0);
        vector<vector<int>> graph(n, vector<int>{});
        for(int i=0; i < n; i++){
            if (manager[i] != -1) graph[manager[i]].push_back(i);
        }
        dfs(headID, headID, graph, informTimeStacked, informTime);

        int res = 0;
        for(int m : informTimeStacked){
            res = max(m, res);
        }
        return res;
    }
    void dfs(int caller, int called, vector<vector<int>>& graph, vector<int>& informTimeStacked, vector<int>& informTime){
        informTimeStacked[called] = informTimeStacked[caller] + informTime[called];
        for(int neigh : graph[called]){
            dfs(called, neigh, graph, informTimeStacked, informTime);
        }
    }
};