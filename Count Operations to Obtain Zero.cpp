Select tags
0/5
class Solution {
    public int countOperations(int num1, int num2) {
        int t=0;
        if (num1 == 0 || num2==0){
            return 0 ;
        }
        else{
            while((num2!=0) && (num1!=0)){
            if(num1>num2){
                num1-=num2;
                t++;
            }
            else {
                num2-=num1;
                t++;
            }
        }
        }
        return t;
    }
        
}
