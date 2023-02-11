// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
         long deb =0 ;
         long fin = n ; 
         while ( deb <= fin ){
          long mid = (deb+fin) / 2 ; 
          if(  isBadVersion(mid) ) {
              fin = mid - 1 ; 
          }else 
           deb = mid +1 ;                   
    }
    return deb ; }
};
