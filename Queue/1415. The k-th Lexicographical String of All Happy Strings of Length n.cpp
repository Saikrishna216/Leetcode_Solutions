class Solution {
public:
    string getHappyString(int n, int k) {
        if(n==1){
            if(k>3) return "";
            if(k==1) return "a";
            if(k==2) return "b";
            if (k==3) return "c";
        }
        queue<string> q;
        q.push("a");
        q.push("b");
        q.push("c");
        vector<string> res;
        while(!q.empty()){
            string curr=q.front();
            q.pop();
            if(curr.size()==n){
                res.push_back(curr);
                continue;
            }
            string first=curr;
            string second =curr;
            if(curr.back()=='a'){
                first.push_back('b');
                second.push_back('c');
            }
            else if(curr.back()=='b'){
                first.push_back('a');
                second.push_back('c');
            }
            else{
                first.push_back('a');
                second.push_back('b');
            }
            q.push(first);
            q.push(second);
        }
        if(res.size()<k) return "";
        return res[k-1];
    }
};
