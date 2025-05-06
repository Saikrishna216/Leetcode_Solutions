class Solution {
public:
    int check(vector<int>& first,vector<int>& second,int n){
        int count=0;
        for(int i=0;i<first.size();i++){
            if(first[i]==n) continue;
            else if(second[i]==n) count++;
            else return INT_MAX;
        }
        return count;
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int count_tops=INT_MAX;
        int count_bottoms=INT_MAX;
        for(int n=1;n<=6;n++){
            count_tops=min(check(tops,bottoms,n),count_tops);
            count_bottoms=min(check(bottoms,tops,n),count_bottoms);
        }
        return min(count_tops,count_bottoms)==INT_MAX?-1:min(count_tops,count_bottoms);
    }
};
