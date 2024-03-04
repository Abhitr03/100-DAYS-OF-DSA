class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size(), s = 0, e = 1;
        vector<int> ans(n);
        for(int i = 0;i < n;i++){
            if(nums[i] >= 0){
                ans[s] = nums[i];
                s = s + 2;
            }
            else{
                ans[e] = nums[i];
                e += 2;
            }
        }
        return ans;
    }
};