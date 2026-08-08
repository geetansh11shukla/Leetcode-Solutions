/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* Slow=head;
        ListNode* Fast=head;
        int Count=0;
        while(Fast!=NULL && Fast->next!=NULL)
        {
            Slow=Slow->next;
            Fast=Fast->next->next;
            if(Slow==Fast)
            {
                Slow=head;
                while(Slow!=Fast)
            {
                Slow=Slow->next;
                Fast=Fast->next;
                Count++;
            
            }
       cout<<"tail connects to node index "<<Count<<endl;
       return Slow;
            }
        }
        cout<<"no cycle"<<endl;
        return nullptr;
    }
};