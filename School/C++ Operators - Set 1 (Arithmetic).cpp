#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        vector<int> result;
        result.push_back(A + B);
        result.push_back(A * B);
        if(A>B) {
            result.push_back(A - B);
            result.push_back(A / B);
        }
        else    {
            result.push_back(B - A);
            result.push_back(B / A);
        }
        return result;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        vector<int> ans = ob.cppOperators(A, B);
        for (int u : ans) cout << u << "\n";
    }
}  // } Driver Code Ends