class Solution {
public:
    int commonFactors(int a, int b) {
        int p = gcd(a,b);
        int res = 0 ;
        int i = 1 ; 
        while (i <= p){
        if ( p % i == 0) 
          res ++ ; 
        i++ ; 
        }
        return res ; 

        
    }
};
