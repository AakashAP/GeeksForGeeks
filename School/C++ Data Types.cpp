#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int cppIntType() {
        int num;
        cin>>num;
        return num;
    }
    
    char cppCharType() {
        char num;
        cin>>num;
        return num;
    }
    
    float cppFloatType() {
        float num;
        cin>>num;
        return num;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        cout << ob.cppIntType() << endl;
        cout << ob.cppCharType() << endl;
        cout << ob.cppFloatType() << endl;
    }
    return 0;
}
// } Driver Code Ends