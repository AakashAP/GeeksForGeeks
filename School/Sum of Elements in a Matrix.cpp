#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    int sumOfMatrix(int N, int M, vector<vector<int>> Grid) {
        int Sum=0;
        for(auto i=0; i<N; i++)
        {
            for(auto j=0; j<M; j++)
            Sum += Grid[i][j];
       }
       return Sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> Grid(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> Grid[i][j];
        Solution ob;
        cout << ob.sumOfMatrix(N, M, Grid) << "\n";
    }
}
// } Driver Code Ends