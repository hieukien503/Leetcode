#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        while (s[0] == ' ' || s[0] == '+' || s[0] == '-')
        {
            sign = s[0] == '-'? -1 : sign;
            if (s[0] != ' ')
            {
                s.erase(s.begin(), s.begin() + 1);
                break;
            }
            s.erase(s.begin(), s.begin() + 1);
        }
        if (!isdigit(s[0]))
        {
            return 0;
        }
        long long res = 0, i = 0;
        while (isdigit(s[i]))
        {
            res = res * 10 + (int)(s[i] - '0');
            if (res >= (long long)pow(2, 31) - 1 && sign == 1)
            {
                return (long long)pow(2, 31) - 1;
            }
            else if (res >= (long long)pow(2, 31) && sign == -1)
            {
                return -(long long)pow(2, 31);
            }
            i++;
        }
        return sign * res;
    }
};
