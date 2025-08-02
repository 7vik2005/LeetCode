class Disjoint {
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
class Solution
{
    public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        Disjoint ds(n);
        int extra=0;
        for(auto it:connections)
        {
            int u=it[0];
            int v=it[1];
            if(ds.findUP(u)==ds.findUP(v)) extra++;
            else ds.unionSize(u, v);
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(ds.parent[i]==i) count++;
        }
        int ans=count-1;
        if(extra>=ans) return ans;
        return -1;
    }
};