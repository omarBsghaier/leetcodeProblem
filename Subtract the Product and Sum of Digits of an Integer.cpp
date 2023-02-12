class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum =0 , produit = 1 ; 
        int a ;
        while (n) {
            a = n%10;
            sum+= a ;
            produit *= a ;
            n= n/10 ; 

        }
        return (produit - sum) ;

        
    }
};
