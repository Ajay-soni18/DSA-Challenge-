// Brute Force :- nested loop , calculate for every day 

// Maintaining The Minimum price 
// T.C=O(n) S.C = O(1)
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int maxprofit=INT_MIN;
        int mini=prices[0];
        for(int i=1;i<n;i++){
            int profit=prices[i]-mini;
            maxprofit=max(maxprofit,profit);
            mini=min(mini,prices[i]);
        }
        if(maxprofit<0) return 0;
        return maxprofit;
        
    }
};
*/