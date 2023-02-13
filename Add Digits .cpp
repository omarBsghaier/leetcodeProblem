class Solution {
public:
    int sumDigits(int num ){
        int sum = 0 ; 
        while(num){
         sum += num % 10 ;
         num /= 10 ;
        }
        return sum ; 
    }
    int addDigits(int num) {
       int res = sumDigits(num) ;
       while ( res > 9) 
         res = sumDigits(res) ;
       return res ; 
        
    }
}

// version 2 
 int addDigits(int num) {
  return 1 + ( num -1 ) % 9 ; 
  }
