class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size() ; 
        int sum = 0 ;
        int sumDigit = 0 ; 
        for ( int i =0 ; i < n ; i++  ){
            sum+= nums[i] ;
            while ( nums[i] ){
                sumDigit += nums[i]%10 ;
                nums[i] = nums[i]/10 ; 
            }  

        }
        return abs(sum - sumDigit) ;


        
    }
};
