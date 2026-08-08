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
    ListNode* partition(ListNode* head, int x) {
        ListNode* head1=head;
        list<int> arr1;
        list<int> arr2;
        while(head1!=nullptr)
        {
            if(head1->val>=x)
            {
                arr2.push_back(head1->val);
            }
            else
            {
                arr1.push_back(head1->val);
            }
            head1=head1->next;
        }
        arr1.insert(arr1.end(),arr2.begin(),arr2.end());
        ListNode dummy(0);
        ListNode* tail = &dummy;
        for (int val : arr1) {
            tail->next = new ListNode(val);
            tail = tail->next;
        }
        return dummy.next;
    }
};