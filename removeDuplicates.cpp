#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int j = 1;
            int count = 1;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] < nums[i+1])
                {
                    nums[j] = nums[i+1];
                    j++; 
                    count++;
                }
                
            }
            return count;
        }
    };