class Solution {
public:
    int sum(vector<int> v) {
        int res = 0 ;
        int n = v.size() ;
        for(int j=0;j<n;j++)
        {
            res+=v[j];
        }
        return res ;

    }
    int maximumWealth(vector<vector<int>>& accounts) {
    int m=accounts.size();
    int wealth=0;
    for(int i=0;i<m;i++)
    {
        
        wealth=max(sum(accounts[i]),wealth);
    }
    return wealth;
    }
};
  
