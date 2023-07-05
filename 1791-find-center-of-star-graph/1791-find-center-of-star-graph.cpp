class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
       int   center = edges[0][0] ; 
         if ( center ==  edges[1][0] || center == edges[1][1]  )
             return center ;
         return edges[0][1] ;
        
    }
};