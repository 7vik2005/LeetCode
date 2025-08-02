class Disjoint
{
public:
    vector<int> parent, size;
    Disjoint(int n)
    {
        parent.resize(n+1);
        size.resize(n+1);
        for(int i=0;i<n;i++)
        {
            parent[i]=i;
            size[i]=1;
        }
    }
    int findUP(int node)
    {
        if(node==parent[node]) return node;
        return parent[node]=findUP(parent[node]);
    }
    void unionSize(int u, int v)
    {
        int ulpu=findUP(u);
        int ulpv=findUP(v);
        if(ulpu==ulpv) return;
        if(size[ulpu]<size[ulpv])
        {
            parent[ulpu]=ulpv;
            size[ulpv]+=size[ulpu];
        }
        else 
        {
            parent[ulpv]=ulpu;
            size[ulpu]+=size[ulpv];
        }
    }
};
class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        int maxRow=0, maxCol=0;
        for(auto it:stones)
        {
            maxRow=max(maxRow, it[0]);
            maxCol=max(maxCol, it[1]);
        }
        Disjoint ds(maxRow+maxCol+2);
        unordered_map<int, int> mpp;
        for(auto it:stones)
        {
            int nodeRow=it[0];
            int nodeCol=it[1]+maxRow+1;
            ds.unionSize(nodeRow, nodeCol);
            mpp[nodeRow]=1;
            mpp[nodeCol]=1;
        }
        int count=0;
        for(auto it:mpp)
        {
            if(ds.findUP(it.first)==it.first) count++;
        }
        return n-count;
    }
};