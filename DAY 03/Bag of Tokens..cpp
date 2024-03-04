class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        sort(tokens.begin(),tokens.end());
        int i=0;
        int j=n-1;
        int score=0;
        int maxscore=0;
        while(i<=j){
            if(power >=tokens[i]){
                power=power-tokens[i];
                score++;
                i++;
                maxscore=max(maxscore,score);
            }
            else if(score>0){
                power=power+tokens[j];
                score--;
                j--;
            }
            else{
                break;
            }
        }
        
        return maxscore;
    }
};