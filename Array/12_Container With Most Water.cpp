// We Place the pointer at the start and another at the end. we NEED to return size of maximum pot that can hold 
//maximum water. Not the Total water.
// T.C = O(n) S.C= O(1)
/*
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int n = height.size();
        int j=n-1;
        int area=0;
        if(i==j) return height[i];
        while(i<j){
            if(height[i]>=height[j]){
                area=max(area,(height[j]*(j-i)));
                j--;
            }
            else{
                area=max(area,(height[i]*(j-i)));
                i++;
            }

        }
        return area;
        
    }
};
*/