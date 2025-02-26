#include <bits/stdc++.h>
using namespace std;



class Solution {
    public:
        void moveZeroes(vector<int>& nums) { 
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == 0)
                {
                    for (int j = i+1; j < nums.size(); j++)
                    {
                        if (nums[j] != 0)
                        {
                            swap(nums[i], nums[j]);
                            break;
                        }
                    }
                    
                }
                
            }
            
        }
    };
class Solution {
    public:
        void moveZeroes(vector<int>& nums) { 
            int j=0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] != 0)
                {
                    nums[j] = nums[i];
                    j++;
                }
                
            }
            while (j != nums.size())
            {
                nums[j] = 0;
                j++;
            }
                        
        }
    };