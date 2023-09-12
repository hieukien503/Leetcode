#include <iostream>

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int val): val(val), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2, int carry = 0) {
        if (!l1 && !l2)
        {
            if (carry > 0)
            {
                return new ListNode(carry);
            }
            return nullptr;  
        }
        int op1 = l1? l1->val : 0;
        int op2 = l2? l2->val : 0;
        int sum = op1 + op2 + carry;
        ListNode* res = new ListNode(sum % 10);
        res->next = addTwoNumbers(l1? l1->next : nullptr, l2? l2->next : nullptr, sum/10);
        return res;
    }
};
