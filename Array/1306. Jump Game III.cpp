class Solution {
public:
    bool dfs(vector<int>& arr, vector<int>& visited,int i,int n){
        if(i<0 || i>=n) return false;
        if(visited[i]==1) return false;
        if(arr[i]==0){
            return true;
        }
        visited[i]=1;
        return dfs(arr,visited,i+arr[i],n) || dfs(arr,visited,i-arr[i],n);


    }
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        vector<int> visited(n+1,0);

        return dfs(arr,visited,start,n);
    }
};
