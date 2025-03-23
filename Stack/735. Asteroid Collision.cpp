class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i=0;i<asteroids.size();i++){
            bool flag =false;
            while(!st.empty() && st.top()>0 && asteroids[i]<0){
                if(abs(st.top())< abs(asteroids[i])) {
                    st.pop();
                }
                else if(st.top() == abs(asteroids[i])){
                    st.pop();
                    flag =true;
                    break;
                }
                else {
                    flag =true;
                    break;
                }
            }
              
            if(!flag) st.push(asteroids[i]);
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
