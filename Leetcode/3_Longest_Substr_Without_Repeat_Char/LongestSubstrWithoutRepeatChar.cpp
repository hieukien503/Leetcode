#include <iostream>
#include <vector>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::vector<int> hash(256,0);
        int r=0,l=0,count=0;
        while(r<s.size()){
            hash[s[r]]++;
            while(hash[s[r]]>1)
            {
                hash[s[l]]--;
                l++;
            }
            r++;
            count = std::max( count , r-l );
        }
        return count;
    }
};
