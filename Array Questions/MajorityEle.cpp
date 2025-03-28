#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> hashMap;
        for (int num : nums)
        {
            hashMap[num]++;
        }

        int max = -1;
        int maxEle = -1;
        for (const auto &pair : hashMap)
        {
            if (pair.second > max)
            {
                max = pair.second;
                maxEle = pair.first;
            }
        }
        return maxEle;
    }
};