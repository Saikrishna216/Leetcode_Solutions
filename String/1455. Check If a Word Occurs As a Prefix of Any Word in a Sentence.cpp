class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int word_count=1;
        int m=sentence.size();
        int n=searchWord.size();
        for(int i=0;i<m;i++){
            if(sentence[i]==' ') word_count+=1;
            if(sentence[i]==searchWord[0]){
                int k=0;
                int count=0;
                if(i+n<=m){
                    for(int j=i;j<n+i;j++){
                        if(sentence[j]==searchWord[k]){
                            count+=1;
                            k+=1;
                        }
                        else k+=1;
                    }
                    if(count==n && (i==0 ||sentence[i-1]==' ')) return word_count;
                }
            }
        }
        return -1;

    }
};
