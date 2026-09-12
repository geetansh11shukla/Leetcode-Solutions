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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list1;
        ListNode* temp3=list2;
        ListNode* temp4=list2;
        for(int i=0;i<=b;i++)
        {
            temp2=temp2->next;
        }
        
        for(int i=1;i<a;i++)
        {
            temp1=temp1->next;
        }

        while(temp4->next!=nullptr)
        {
            temp4=temp4->next;
        }
        temp1->next=temp3;
        temp4->next=temp2;
        return list1;
    }
};