class Solution {
public:
    int longestPalindrome(string s) {
        int res = 0 ; 
        int n = s.size() ; 
        int ones = 0 ;
        map <char,int> mp;
        for (int i =0 ; i < n ; i++ ){
          auto search = mp.find(s[i]);
         if (search != mp.end()) {
             search->second++;  }  
                  else {
             mp.insert({s[i], 1});
        }
       }
  
        for (const auto &pair : mp) {
           if ( pair.second > 1 && pair.second % 2 == 0) 
           res += pair.second  ;
            else {
            res += pair.second -1 ;
            ones = 1 ;

           } ;
        };
               return res+ones; 
        


    }
};
