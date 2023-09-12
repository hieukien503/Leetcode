#include <iostream>
#include <vector>
class Solution {
public:
    bool isValid(std::string s) {
        std::vector<char> res;
        for (int i = 0; i < s.size(); i++)
        {
            switch (s[i])
            {
                case '(':
                    res.push_back(s[i]);
                    break;
                case '[':
                    res.push_back(s[i]);
                    break;
                case '{':
                    res.push_back(s[i]);
                    break;
                case ')':
                    if (res.empty() || res.back() != '(')
                    {
                        return false;
                    }
                    else
                    {
                        res.pop_back();
                    }
                    break;
                case ']':
                    if (res.empty() || res.back() != '[')
                    {
                        return false;
                    }
                    else
                    {
                        res.pop_back();
                    }
                    break;
                case '}':
                    if (res.empty() || res.back() != '{')
                    {
                        return false;
                    }
                    else
                    {
                        res.pop_back();
                    }
                    break;
            }
        }
        return (res.empty()? true : false);
    }
};
