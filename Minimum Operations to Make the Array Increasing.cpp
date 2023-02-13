class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size() ;
        if (n == 1 ) return 0 ;
        int res = 0 ;
        for (int i = 0; i < n-1  ; i ++ ){
             if ( nums [i] >= nums[i+1]){       
                 res+=  nums[i] - nums[i+1] + 1 ; 
                 nums[i+1] += nums[i] - nums[i+1] + 1 ;
             }
        }
         if (nums[n-2] >= nums[n-1]){
             res+= nums[n-2] - nums[n-1] + 1 ;
         }    

          
          return res ;
          }
      
        
    
};
