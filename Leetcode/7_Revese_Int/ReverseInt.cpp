#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long int n = 0, p = x * 1LL;
        long long int sign = 0;
        if (x < 0)
        {
            sign = -1;
            p = abs(p);
        }
        else if (x > 0)
        {
            sign = 1;
        }
        while (p >= 10)
        {
            n = (n + p % 10) * 10;
            p = p/10;
        }
        n += p;
        n = sign * n;
        if (n > (long long int)pow(2, 31) - 1 || n < -(long long int)pow(2, 31))
        {
            return 0;
        }
        return (int)n;
    }
};
