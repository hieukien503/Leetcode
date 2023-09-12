#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int maxLen = 1;
        for (int i = 0; i < s.length();)
        {
            int j = i, k = i;
            while (k < s.length() - 1 && s[k + 1] == s[k])
            {
                k++;
            }
            i = k + 1;
            while (k < s.length() - 1 && j > 0 && s[k + 1] == s[j - 1])
            {
                j--;
                k++;
            }
            int newLen = k - j + 1;
            if (newLen > maxLen)
            {
                start = j;
                maxLen = newLen;
            }
        }
        return s.substr(start, maxLen);
    }
};
