class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
       
        int maxcount=0;
         vector<int>ans;
         int ind;
        for(int i=0;i<n;i++){
             int count=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
                    if(count>maxcount){
                        maxcount=count;
                        ind=i;
                    }
                }
            ans.push_back(ind);
            ans.push_back(maxcount);
           return ans;
        }
      
    
};