#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{
public:
    string isVowel(char c){
        string vowel = "AEIOUaeiou";
        auto found = vowel.find(c);
        if(found != string::npos)
            return "YES";
        return "NO";
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin >> c;
        Solution ob;
        cout << ob.isVowel(c) << endl;
    }
    return 0; 
} 
// } Driver Code Ends