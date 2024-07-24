// We Sort the array so that we can avoid repeating array. 
// T.C = O(nlog(n) + n^2) S.C = O(1)
/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int left=i;
            int mid=i+1;
            int right=n-1;
            while(mid<right){
                int sum= nums[left]+nums[mid]+nums[right];
                if(sum>0) right--;
                else if(sum<0) mid++;
                else{
                    ans.push_back({nums[left],nums[mid],nums[right]});
                    mid++;
                    right--;
                    while(mid<right && nums[mid]==nums[mid-1]) mid++;
                    while(mid<right && nums[right]==nums[right+1]) right--;
                }

            }
            
        }
        return ans;
    }
};
*/