//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int>& arr, int k) {
        int j = arr.size()-1;
        int i= 0;
         
        
        while(j>=i) {
            int mid;
            mid = i + (j-i)/2;
            if (k == arr[mid]) {
                return true;
            }
            if (arr[mid] > k) {
                j = mid -1;
            } else if(arr[mid]<k) {
                i = mid + 1;
            }
        }
        return false;
    }
};


//{ Driver Code Starts.

int main(void) {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        int k;
        cin >> k;
        cin.ignore();
        Solution ob;
        cout << (ob.searchInSorted(arr, k) ? "true" : "false") << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends