//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
 int countLessEqual(const vector<vector<int>>& matrix, int mid) {
    int count = 0;
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; ++i) {
        // Using upper_bound to find the position of the first element greater than mid
        count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
    }

    return count;
}

    int median(vector<vector<int>> &matrix, int R, int C){
   
// Function to find the median of the row-wise sorted matrix

    int low = INT_MAX, high = INT_MIN;

    // Finding the minimum and maximum elements in the matrix
    for (const auto& row : matrix) {
        low = min(low, row[0]);
        high = max(high, row[C - 1]);
    }

    // Binary search to find the median
    while (low < high) {
        int mid = low + (high - low) / 2;
        int count = countLessEqual(matrix, mid);

        // Adjusting the search space based on the count of elements less than or equal to mid
        if (count <= (R * C) / 2) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low;
}
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends