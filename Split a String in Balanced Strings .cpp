class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size() ;
        int res = 0 ; 
        int sum = 0 ;
        for(int i = 0 ; i < n ; i ++ ){
            if(s[i] == 'R')
             sum+=1; 
             else 
             sum -= 1 ;
            if (sum == 0)
             res++ ; 

        }
        return res ; 
        
    }
};
