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
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n=accounts.size();
        Disjoint ds(n);
        unordered_map<string, int> mailNode;
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<accounts[i].size();j++)
            {
                string mail=accounts[i][j];
                if(mailNode.find(mail)==mailNode.end())
                {
                    mailNode[mail]=i;
                }
                else
                {
                    ds.unionSize(i, mailNode[mail]);
                }
            }
        }
        vector<string> merged[n];
        for(auto it:mailNode)
        {
            string mail=it.first;
            int node=ds.findUP(it.second);
            merged[node].push_back(mail);
        }
        vector<vector<string>> ans;
        for(int i=0;i<n;i++)
        {
            if(merged[i].size()==0) continue;
            sort(merged[i].begin(), merged[i].end());
            vector<string> temp;
            temp.push_back(accounts[i][0]);
            for(auto it:merged[i])
            {
                temp.push_back(it);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};