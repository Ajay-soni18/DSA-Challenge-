// There is a pattern of valid paranthese type question we use stack to check the top of stack
// T.C = O(N) S.C = O(N)
/*
class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
    stack<char>st;
    for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') {
            st.push(s[i]);
          }
       else {
           if(st.size()==0) return false;
           char ch=s[i];
           if(st.top()=='{' && ch!='}' || st.top()=='(' && ch!=')' || st.top()=='[' && ch!=']') return false;
           st.pop();
       }
    }
    if(st.size()==0) return true;
    else return false;
        
    }
};
*/