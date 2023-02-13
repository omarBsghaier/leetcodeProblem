class Solution {
public:
    int maximum69Number (int num) {
        long max = 0 ; 
        bool change = false ;
        vector<int> v ;
        while (num) {
            v.push_back(num%10) ;
            num /= 10 ; 
        }
        int n = v.size()-1 ;
         while( n >= 0 ) {
             if ( v[n] == 6 && change == false){
                 change = true ;
                 v[n]= 9 ;
             }
             max +=  v[n]*pow(10, n ) ;
             n-- ;


         }
         return max ;

        
        
    }
};
