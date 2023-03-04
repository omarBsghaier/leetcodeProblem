class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res ; 
        int maxi = INT_MIN ; 
        
          for ( int i = 0 ;  i < candies.size() ; i++ ){
              maxi = max ( maxi , candies[i]) ;
        
        }
        
        
        for ( int i = 0 ;  i < candies.size() ; i++ ){
            if ( extraCandies + candies[i] >= maxi ){
                res.push_back(true) ;
            }
            else res.push_back(false) ;
        }
        return res;
        
    }
};