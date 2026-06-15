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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* Temp=head;
        int count=0;
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        while(Temp!=nullptr)
        {
            count++;
            Temp=Temp->next;
        }
        int mid=count/2;
        Temp=head;
        for(int i=0;i<mid-1;i++)
        {
            Temp=Temp->next;
        }
        Temp->next=Temp->next->next;
        return head;
    }
};