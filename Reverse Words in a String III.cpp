 class Solution {
public:
    string reverse ( string s) {
        int n = s.size() ;
        for ( int i =0 ; i < n/2 ; i++){
            swap(s[i],s[n-i-1]) ;
        }
        return s ;

    }
    string reverseWords(string s) {
        int n =s.size() ; 
        string tmp="";
        string res=""; 
        int last=0 ; 
        for ( int i=0 ; i<n ; i++ ){
          
           tmp += s[i] ;
           if ( s[i]==' '  ){
               res+=reverse(tmp); 
               tmp=""; 
               last = i ;

            }
          
        } ;
        tmp ="" ; 
         for ( int j=last ; j <n ; j++ ){
               tmp += s[j] ;            
            }
            tmp+= " " ; 
            res += reverse(tmp);
           
         int nr = res.size() ;
         string ans ;
         for (int k = 1; k < nr-1 ; k++){
            ans+= res[k] ; 

         }

        
        if (last != 0 )
        return ans ;
        ans +=res[nr-1] ; 
        return ans  ;
        
    }
};
