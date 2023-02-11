class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int number = 0 ;
        int n =0 ; 
        ListNode * tmp = head ; 
        while( tmp){
            n++ ;
            tmp = tmp->next ; 
        }
        while ( head) {      
            if ( head->val == 1)
              number += 1<<n-1 ; 
            n-- ; 
            head = head->next;
           
        }
        return number ;
        
    }
};
