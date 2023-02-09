class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size( ) ; 
        double sum = 0 ; 
        double res ;
        int i =0 ;
        for (  ; i < k ; i++)
         sum += nums [i] ;
        i =0 ; 
        res = sum ;      
        while ( i+k < n )  {    
        sum = sum +  nums[k+i]; 
        sum = sum - nums[i] ;
        res = max ( sum , res ) ;
        i++ ; 
        }
        double ans = res/k ;
        return ans ;      

        
    }
};
