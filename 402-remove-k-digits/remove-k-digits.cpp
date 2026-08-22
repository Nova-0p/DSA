class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int> st;

        for (char x : num) {
            int digit = x - '0';

            // Remove previous greater digits
            while (!st.empty() && k > 0 && st.top() > digit) {
                st.pop();
                k--;
            }

            st.push(digit);
        }

        // If k is still left, remove from the end
        while (k > 0) {
            st.pop();
            k--;
        }

        // Stack -> string
        string ans;

        while (!st.empty()) {
            ans += char(st.top() + '0');
            st.pop();
        }

        // Reverse because stack gives reverse order
        reverse(ans.begin(), ans.end());

        // Remove leading zeros
        int i = 0;

        while (i < ans.size() && ans[i] == '0') {
            i++;
        }

        ans = ans.substr(i);

        if (ans.empty()) {
            return "0";
        }

        return ans;
    }
};