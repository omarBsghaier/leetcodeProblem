class Solution {
public:
    int PGCD( int a ,int b ) {
        if ( a == 0 || b == 0) return 0 ;
        if (a== b) return a ;
        else if ( a > b) 
         return PGCD ( a-b , b) ; 
        return PGCD ( a, b-a) ; 

    }
    int findGCD(vector<int>& nums) {
        int n  = nums.size() ;
        sort(nums.begin(),nums.end()) ;
        return PGCD ( nums[0] , nums[n-1]) ;



    }
};
