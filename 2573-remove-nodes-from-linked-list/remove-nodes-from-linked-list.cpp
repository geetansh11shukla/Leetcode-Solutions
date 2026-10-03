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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp=head;
        vector<int> ans1;
        stack<int> st;
        vector<int> ans2;
        while(temp!=nullptr)
        {
            ans1.push_back(temp->val);
            temp=temp->next;
        }
        int n=ans1.size();
        st.push(ans1[n-1]);
        ans2.push_back(ans1[n-1]);
        for(int i=ans1.size()-2;i>=0;i--)
        {
            if(ans1[i]>=st.top())
            {
                st.push(ans1[i]);
                ans2.push_back(ans1[i]);
            }
        }
        reverse(ans2.begin(),ans2.end());
        ListNode* temp1=new ListNode(ans2[0]);
        ListNode* temp2=temp1;
        for(int i=1;i<=ans2.size()-1;i++)
        {
            temp2->next=new ListNode(ans2[i]);
            temp2=temp2->next;
        }
        return temp1;
    }
};