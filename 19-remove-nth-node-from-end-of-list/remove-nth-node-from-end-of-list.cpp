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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // int m=head.size();
        int m=0;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            m++;
            temp=temp->next;
        }
        int k=m-n;
        temp=head;
        if (k == 0) {
            return head->next;
        }
        for(int i=1;i<=k-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};