class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int leftsum =0 ; int j,i = 0 ; 
        int rightsum = 0 ; 
        int n = nums.size() ; 
        int res=-1 ;
        for (int pivot = 0 ; pivot < n ; pivot++){
          
        
            for (i = 0   ; i < pivot ; i++  ){
             leftsum +=nums[i];   
            };
            for ( j = n-1   ; j > pivot ;  j-- ){
              rightsum +=nums[j];   
            } ;
            if ( leftsum ==  rightsum ) {
              return pivot  ;  
            }else {

            leftsum = 0 ;
            rightsum = 0 ; }

        } ; 


        return -1 ; 
        
};
};