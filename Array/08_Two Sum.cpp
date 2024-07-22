// Brute force 
// T.C=O(n^2) S.C=O(1)
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target) return{i,j};
            }
        }
        return{-1,-1};
        
    }
};
*/

// Optimal Solution 
// T.C = O(n) S.C=O(n)
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(m.find(x)!=m.end()) return {i,m[x]};
            m[nums[i]] = i;
        }
        return{}; 
    }
};
*/