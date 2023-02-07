class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.length() ;
        int indice = 0    ;
        int i = 0; 
         bool test = true ; 
         while( i < n &&  test == true   ){     
            if ( word[i] == ch){
                 indice = i ; 
                 test = false ;
            } 
               
            i++ ;
        }
        if ( indice == 0 ) return word ; 
        for ( int j = 0 ; j <= indice/2 ; j++ )
         { swap(word[j],word[indice-j]) ;}


        return word ;  
        
    }
};
