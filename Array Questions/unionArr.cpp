#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      // a,b : the arrays
      // Function to return a list containing the union of the two arrays.
      vector<int> findUnion(vector<int> &a, vector<int> &b) {
          // Your code here
          // return vector with correct order of elements

          int n = a.size() + b.size();
          vector<int> arr;
           int i=0; int j =0;
           while (i< a.size() && j<b.size())
           {
               if (a[i] == b[j])
               {
                   if (arr.empty() || arr.back() != a[i])
                   {
                        arr.push_back(a[i]);
                   }
                   
                   i++;
                   j++;
               } else if (a[i] > b[j])
               {
                  if (arr.empty() || arr.back() != b[j])
                  {
                      arr.push_back(b[j]);
                  }
                  j++;
               } else {
                if (arr.empty() || arr.back() != a[i]){
                  arr.push_back(a[i]);

                }                  
                i++;
               }       
           }
           while (i < a.size())
           {
            if (arr.empty() || arr.back() != a[i]){
                arr.push_back(a[i]);

              }               i++;
           }
           while (j < b.size())
           {
            if (arr.empty() || arr.back() != b[j])
            {
                arr.push_back(b[j]);
            }
            j++;
           }
           return arr;
      }
  };