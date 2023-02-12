class Solution {
public:
    int countDigits(int num) {
        int tmp = num ;
        int res = 0 ; 
        int digit ;
        while ( tmp ) {
            digit = tmp %10 ;
            if ( digit != 0 && num % digit == 0)
              res ++ ;
            tmp = tmp /10 ;   

        }
        return res ; 
        

        
    }
};
