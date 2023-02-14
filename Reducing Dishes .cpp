class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size() ;
        long ans =0 ;
        sort ( satisfaction.begin(), satisfaction.end()) ;
        long res =0 ;
         if (satisfaction[n-1] <= 0 ) return 0 ; 
         int j,i,k ;
         for (  i = 0 ; i < n ; i++) {
             for ( j=i , k = 1; j < n ; j++ , k++ ) {
                 res += satisfaction[j] * k ;

             }
             ans =max (ans , res) ; 
             res =0 ;
         }
         return ans ;
         
        
    }
};
