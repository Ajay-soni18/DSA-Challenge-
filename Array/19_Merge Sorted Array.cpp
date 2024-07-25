// T.C = O(n+m)
/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1; // to keep track of nums1
        int j=n-1; // to keep track of nums2
        int k=n+m-1; //in nums1 where we are going to fill element
        while(j>=0 && i>=0){
            if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else{
                nums1[k]=nums2[j];
                k--;
                j--;
            }
        }
        // if left in nums2
        // do not need to worry about nums1 because we are fill it inself
        while(j>=0) {
            nums1[k]=nums2[j]; 
            k--; 
            j--;
        }
    }
};
*/