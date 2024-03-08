class Solution {
public:
   vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();//number of rows;
        int n=matrix[0].size();//number of coloums
        int sr=0;
        int sc=0;
        int er=m-1;
        int ec=n-1;
        vector<int>ans;
        int i;
        int val=0;
        while(sr<=er && sc<=ec){
            
            for(i=sc;i<=ec;i++){
             ans.push_back(matrix[sr][i]);
            // ++val;
            }
            for(i=sr+1;i<=er;i++){
            ans.push_back(matrix[i][ec]);
           // ++val;
            }
            if(sr!=er){
            for(i=ec-1;i>=sc;i--){
             ans.push_back(matrix[er][i]);
            // ++val;
            }
            }
            if(sc!=ec){
            for(i=er-1;i>sr;i--){
            ans.push_back( matrix[i][sc]);
           // ++val;
            }
            }
          sr++;er--;
          sc++;
          ec--;
        }
        return ans;
    }   
    
};