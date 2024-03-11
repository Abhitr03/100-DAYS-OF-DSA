class Solution {
public:
    string customSortString(string order, string s) {
        map<char, int> mp;
        for(char ch : s) {
            mp[ch]++;
        }
        string ans = "";
        for(char ch : order) {
            while(mp[ch] != 0) {
                ans += ch;
                mp[ch]--;
            }
        }
        for(auto val : mp) {
            while(val.second != 0) {
                ans += val.first;
                val.second--;
            }
        }
        return ans;
    }
};