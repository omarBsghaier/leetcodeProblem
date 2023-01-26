class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size() ; 
        bool res = true ;
         int i = 0 ; 
         while (i < n){
         if ( bits[i] == 1 ) {
             i = i+2 ; 
             if ( i == n-1)
              res = true ;
             else if  (i > (n-1) )
              res =  false ;
         }
         else  if ( bits[i] == 0 ){
             i = i+1 ; 
             if ( i == n-2)
              res = true ;
         }
        
         }  ; 
     return res ;    
     
};
};
