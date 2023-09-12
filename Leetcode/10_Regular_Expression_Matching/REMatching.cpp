#include <iostream>
#include <regex>
#include <string>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        return regex_match(s, regex(p));
    }
};