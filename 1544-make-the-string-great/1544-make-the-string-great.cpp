class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(char c:s){
            if(!st.empty()&& st.top()!=c && tolower(st.top())==tolower(c)){
                st.pop();
            }
            else st.push(c);
        }
        string ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};