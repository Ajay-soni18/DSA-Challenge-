// Using Sorting , and comapring 1st and last string of the vector only
// T.C=O(nlog(n)) S.C=O(1);
/*
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string a="";
        string p=strs[0];
        string q=strs[strs.size()-1];
        int i,j=0;
        int pn=p.size();
        int qn=q.size();
        while(p[i]==q[j] && i<pn && j<qn){
            a+=p[i];
            i++;
            j++;
        }
        return a;
        
    }
};
*/