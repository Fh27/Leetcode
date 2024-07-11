class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> st;
        vector<char> ans;
        for (char ch : s) {
            if (ch == '(') {
                st.push(ans.size());
            } else if (ch == ')') {
                int start_ind = st.top();
                st.pop();
                reverse(ans.begin() + start_ind, ans.end());
            } else {
                ans.push_back(ch);
            }
        }

        return string(ans.begin(), ans.end());
    }
};
