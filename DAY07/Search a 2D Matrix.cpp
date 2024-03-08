 class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        if(n==0 || m==0){
            return false;
        }
        int s=0;
        int e=n*m-1;
        while(s<=e){
            int mid= s + (e-s)/2;
            int ind=matrix[mid/m][mid%m];
            if(target==ind)return true;
            else if(target>ind){
                s=mid+1;
            }
            else {
                e=mid-1;
            }
        }
        return false;
    }
};
		