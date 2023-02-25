       class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size() ; 
        int min = prices[0] ;
        int res =0 ;
        int  max_profit = 0  ;
        for ( int i = 1 ; i < n ; i++){
            if ( min > prices[i])
                min = prices[i] ;
            res = prices[i]-min ; 
            max_profit = max(max_profit, res ) ;

            
        }
        return(max_profit) ;
        
    }
}; 
   
