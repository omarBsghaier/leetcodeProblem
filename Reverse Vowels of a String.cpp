class Solution {
public: 
    bool static isVowels( char c ){
        c = tolower(c);
        if (c =='a'|| c =='e'|| c =='i'||c == 'o' || c == 'u')
         return true ;
        return false  ;  
    }

    string reverseVowels(string s) {
        int n = s.length() ; 
        int i = 0 ;
        int j = n-1 ;
        bool check  ; 
        while(i<j){  
           if (! isVowels(s[i]) ) 
               i++ ;               
            if ( ! isVowels(s[j]) )
              j-- ; 
           check = isVowels(s[i]) && isVowels(s[j]) ; 
           if ( check) {
              swap( s[i] ,s[j] ) ; 
              i++ ;
              j-- ;
             } 
        }
        return s ;
        
    }
}
