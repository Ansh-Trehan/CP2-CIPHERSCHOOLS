//https://leetcode.com/problems/redundant-connection/

class Solution
{
public:
    int Find(int parent[], int v)
    {
        if(parent[v] == -1)
            return v;
        return Find(parent, parent[v]);
    }
    
    void Union(int parent[], int v1, int v2)
    {
        int parent1 = Find(parent, v1);
        int parent2 = Find(parent, v2);
        if(parent1 != parent2)
            parent[v1] = parent2;
    }
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges)
    {
        int ansIndex = -1;
        int parent[10001] ;
        for(int i = 0; i < 10001; i++)
            parent[i] = -1;
        for(int i = 0; i < edges.size(); i++)
        {
            int p1 = Find(parent, edges[i][0]);
            int p2 = Find(parent, edges[i][1]);
            if(p1 == p2)
                ansIndex = i;
            Union(parent, p2, edges[i][0]);
        }
        vector<int> temp;
        if(ansIndex != -1)
            return edges[ansIndex];
        return temp;
    }
};