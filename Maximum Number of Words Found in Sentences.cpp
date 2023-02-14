class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
    int m=sentences.size();
    int word = 0 ;
    int maximum_word =0;
    for(int i=0;i<m;i++)
    {
        string ch = sentences[i] ; 
        int n=ch.size();         
        for(int j=0;j<n;j++)
        {
            if(ch[j]==' ')
            {
                word ++;
            }
        }
        maximum_word=max(word,maximum_word);
        word = 0 ;
    }
    return maximum_word+1;


    }
};
