class Solution {
public:
    bool isPalindrome(string s) {
        if (s =="") return true ;
        int n = s.size() ;
        string tmp="" ; 
        for ( int i = 0 ; i < n ; i++ ){
             bool check = (isalpha(s[i]) || isdigit(s[i])) ; 
            if (check == true ) {
                tmp.push_back (tolower(s[i]) )  ; 
            } ;
        } ; 
         int j = 0 ;
         int t = tmp.size() ;
           while ( j < t) {
              if ( tmp[j] != tmp[t-j-1]){
                  return false ;
              }
              j++ ;
               
        }
        return true ; 

    }
};
