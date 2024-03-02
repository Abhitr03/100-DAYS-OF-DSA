class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      int n=nums.size();
        vector<int>arr(n);
        
        int i=0;
        int j=n-1;
        int k=n-1;

        while(i<=j){
            if(abs(nums[i])>abs(nums[j])){
                arr[k]=abs(nums[i]*nums[i]);
                k--;
                i++;
            }
            else{
                arr[k]=abs(nums[j]*nums[j]);
                k--;
                j--;

            }
           
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};