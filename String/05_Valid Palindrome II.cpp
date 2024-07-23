// method is simple We will check using two pointer if it failed condtion for the first time then 
// We will call another function removing either from the front or end
// T.C = O(n) S.C=O(1)
/*
class Solution {
private:
    // this function tell use after one unmatched char if there is another unsuccessful char or not
    bool ispalindrome(int start , int end , string s){
        while(start<=end){
            if(s[start]!=s[end]) return false;
        
        start++;
        end--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                // we have to option for delete thats why checking both the probability
                return ispalindrome(i+1,j,s) || ispalindrome(i,j-1,s);
            }
            i++;
            j--;
        }
        return true;
    }
};

*/