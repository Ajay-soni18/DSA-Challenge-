// Using Moore's Voting algorithm
// T.C = O(N)
/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int ele;
        int count=0;
        for(int i=0;i<n;i++){
            if(count==0) ele=nums[i];
            if(nums[i]==ele) count++;
            else count--;
        }
        return ele;
        
    }
};
*/