// Using sliding Window Type Technique
// T.C = O(N*M) S.C=O(1);

/*
class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1 = haystack.size();
        int len2 = needle.size();
        int index=-1;
        int ans=-1;
        for(int i=0;i<len1-len2+1;i++){
            if(needle[0]==haystack[i]){
                index=i;
                int j=1;
                int t=i+1;
                while(j<needle.size()){
                    if(haystack[t]!=needle[j]) break;
                    else{
                        t++;
                        j++;
                    }
                }
                if(j==needle.size()) {
                    ans=index;
                    break;
                }
                else index=-1;
            }
        }
        return ans;

        
    }
};
*/
// M-2 Using Inbuilt substr function with same time and space complexity
/*
class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1 = haystack.size();
        int len2 = needle.size();
        for(int i=0;i<len1-len2+1;i++){
            if(haystack.substr(i,len2)==needle) return i;
        }
        return -1;
    }
};
*/