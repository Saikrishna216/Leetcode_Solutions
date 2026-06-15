/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* curr=head;
        int n=0;
        while(curr){
            n+=1;
            curr=curr->next;
        }
        int i=0;
        curr=head;
        while(i>n/2){
            i+=1;
            curr=curr->next;
        }
        stack<int> st;
        while(curr){
            st.push(curr->val);
            curr=curr->next;
        }
        int ans=0;
        curr=head;
        while(!st.empty()){
            ans=max(ans,curr->val+st.top());
            st.pop();
            curr=curr->next;
        }
        return ans;
    }
};
