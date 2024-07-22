// pattern of prefix sum and hash map 
// T.C = O(n) S.C = O(n)

/*
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int currsum=0;
        int count=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            currsum+=nums[i];
            int mod = ((currsum % k) + k) % k;
            if(mp.find(mod)!=mp.end()) count+=mp[mod];
            mp[mod]++;
        }
        return count;
        
    }
};
*/