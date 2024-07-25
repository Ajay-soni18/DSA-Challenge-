// Using Greedy Solution
// T.C = O(n)
/*
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return true;
        int further = 0;
        
        for (int i = 0; i < n; i++) {
            if (i > further) return false; // If i is not reachable
            further = max(further, i + nums[i]);
            if (further >= n - 1) return true; // If we can reach the end
        }
        
        return false;
    }
};

*/