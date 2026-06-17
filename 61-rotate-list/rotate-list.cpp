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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0 || !head || !head->next)
        {
            return head;
        }
        ListNode* temp1=head;
        int count=1;
        while(temp1!=nullptr && temp1->next!=nullptr)
        {
          temp1=temp1->next;
          count++;
        }
        temp1->next=head;
        k=k%count;
        int m=count-k;
        ListNode* temp2=head;
        for(int i=1;i<=m-1;i++)
        {
            temp2=temp2->next;
        }
        ListNode* temp3=temp2->next;
        temp2->next=nullptr;
        return temp3;
    }
};