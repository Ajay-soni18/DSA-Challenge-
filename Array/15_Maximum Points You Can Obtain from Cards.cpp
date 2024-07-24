// Using prefix-sum + sliding-window
// T.C= O(2*k)
/*
class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int n = card.size();
        int leftsum=0;
        int rightsum=0;
        int maxscore=0;
        for(int i=0;i<k;i++) leftsum+=card[i];
        maxscore=leftsum;
        int j=n-1;
        for(int i=k-1; i>=0 ; i--){
            leftsum=leftsum-card[i];
            rightsum+=card[j];
            j--;
            maxscore=max(maxscore , leftsum+rightsum);
        }
        return maxscore;
    }
};
*/