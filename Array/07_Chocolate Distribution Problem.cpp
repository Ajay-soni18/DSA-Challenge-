// M-1 First we will sort the array. place i at 0 amd j at no. of student-1
// T.C = O(nlogn+m) S.C=O(1)

/*class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    int i=0 , j=m-1;
    long long ans=INT_MAX;
    while(j<n){
       long long diff =a[j]-a[i];
        ans=min(ans,diff);
        i++;
        j++;
    }
    return ans;
    }   
};
*/