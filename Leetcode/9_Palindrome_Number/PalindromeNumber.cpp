#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
        {
            return false;
        }
        else
        {
            vector<int> digit;
            while (x != 0)
            {
                digit.push_back(x % 10);
                x = x/10;
            }
            int n = digit.size();
            for (int i = 0; i < n; i++)
            {
                if (digit[i] != digit[n - 1 - i])
                {
                    return false;
                    break;
                }
            }
            return true;
        }
    }
};
