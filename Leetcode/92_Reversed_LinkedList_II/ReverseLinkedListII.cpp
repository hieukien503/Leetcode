#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int val): val(val) {}
    ListNode(int val, ListNode* next): val(val), next(next) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == nullptr || left == right)
        {
            return head;
        }
        vector<int> v;
        ListNode* p = head;
        while (p != nullptr)
        {
            v.push_back(p->val);
            p = p->next;
        }
        reverse(v.begin() + left - 1, v.begin() + right);
        p = head;
        for (int i = 0; i < v.size(); i++)
        {
            p->val = v[i];
            p = p->next;
        }
        return head;
    }
};