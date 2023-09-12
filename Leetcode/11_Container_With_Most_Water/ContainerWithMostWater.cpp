#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int hP = 0;
        int tP = height.size() - 1;
        int maxArea = (tP - hP) * min(height[tP], height[hP]); 
        while(hP < tP)
        {
            maxArea = max(maxArea, (tP - hP) * min(height[tP], height[hP]));
            if(height[tP] <= height[hP])
            {
                tP--;
            }
            else{
                hP++;
            }
        }
        return maxArea;
    }
};