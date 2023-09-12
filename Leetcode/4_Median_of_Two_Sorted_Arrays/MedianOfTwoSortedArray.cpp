#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        for (int i = 0; i < n; i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
        m = nums1.size();
        return (m % 2 == 0? (double)(nums1[m/2-1] + nums1[m/2])/2 : (double)nums1[m/2]);
    }
};
