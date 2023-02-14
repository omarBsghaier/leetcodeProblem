class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int res = 0 ; 
         for (int i = 0  ; i < op.size() ; i++ ){
             string ch = op[i] ; 
             if ( ch[0] == '+' || ch[2]== '+')
              res ++ ; 
             else res-- ; 
         }
         return res ;
        
    }
};
