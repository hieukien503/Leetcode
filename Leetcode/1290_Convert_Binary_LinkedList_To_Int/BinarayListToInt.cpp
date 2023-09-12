#include <iostream>
#include <string>
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
    int getDecimalValue(ListNode* head) {
        if (head == nullptr)
        {
            return 0;
        }
        int len = 0;
        string nums = "";
        while (head != nullptr)
        {
            len++;
            nums += to_string(head->val);
            head = head->next;
        }
        len--;
        int i = 0, ans = 0;
        while (len >= 0)
        {
            ans += (int)pow(2, len) * (nums[i] - '0');
            i++;
            len--;
        }
        return ans;
    }
};
