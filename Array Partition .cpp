class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int res =0  ; 
        int n = nums.size() ;
         sort(nums.begin(),nums.end());
         int  j = n-2 ; 
        while ( j >=0){
            res += nums[j] ; 
            j-= 2 ; 
        }
        return res ; 
        

        
    }
};
