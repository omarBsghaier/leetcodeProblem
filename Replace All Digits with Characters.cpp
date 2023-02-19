class Solution {
public:
    string replaceDigits(string s) {
        for ( int i = 1 ; i < s.size() ; i+=2 ){
            int a = s[i] - '0' ;
            s[i]=char((int)s[i-1] + a) ;
        }
        return s ;
        
        
    }
};
