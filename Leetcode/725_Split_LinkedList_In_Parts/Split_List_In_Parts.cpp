#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int val): val(val), next(nullptr) {}
    ListNode(int val, ListNode* next): val(val), next(next) {}
};

class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> res(k, nullptr);
        int len = 0;
        ListNode* tmp = head;
        while (tmp != nullptr)
        {
            len++;
            tmp = tmp->next;
        }
        if(len < k)
        {
            int idx = 0;
            ListNode* prev = head;
            while(prev != nullptr)
            {
                tmp = prev;
                prev = prev->next;
                tmp->next = nullptr;
                res[idx] = tmp;
                idx++;
            }
            return res;
        }
        int subPart = len/k, remain = len % k, idx = 0;
        ListNode* prev = head;
        while (remain > 0)
        {
            tmp = prev;
            int i = 1;
            while (i < subPart + 1)
            {
                tmp = tmp->next;
                i++;
            }
            ListNode* temp = prev;
            prev = tmp->next;
            tmp->next = nullptr;
            res[idx] = temp;
            idx++;
            remain--;
        }
        while(prev != nullptr)
        {
            tmp = prev;
            int i = 1;
            while (i < subPart)
            {
                tmp = tmp->next;
                i++;
            }
            ListNode* temp = prev;
            prev = tmp->next;
            tmp->next = nullptr;
            res[idx] = temp;
            idx++;
        }
        return res;
    }
};