#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            int n = nums.size();
            int t = 0;
            vector<int> temp(n);
            k = k%nums.size();
            int j = nums.size() - k;
            for (int i = j; i < nums.size(); i++)
            {
                temp[t] = nums[i];
                t++;
            }
            for (int i = 0; i < j; i++)
            {
                temp[t] = nums[i];
                t++;
            }
            nums = temp;
        }
    };