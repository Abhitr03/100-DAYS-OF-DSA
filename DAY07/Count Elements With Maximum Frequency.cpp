class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        int count=0;
        int maxfreq=0;
        for(int i=0;i<n;i++){
           mpp[nums[i]]++;
           if(mpp[nums[i]]==maxfreq)count+=maxfreq;
           else if(mpp[nums[i]]>maxfreq){
               maxfreq=mpp[nums[i]];
               count=maxfreq;
           }
        }
        return count;
    }
};