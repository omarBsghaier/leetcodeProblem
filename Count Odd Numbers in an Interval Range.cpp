class Solution {
public:
    int countOdds(int low, int high) {
        int res = 0 ;
        
        while ( low <= high){ 
            if( low % 2 !=0){
              low+=2;         
              res ++ ;
            }
            else low ++ ; 
                
        }
        return res ;

        
         
          
        
    }
};
