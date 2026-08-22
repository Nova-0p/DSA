class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int> pse(n);
        vector<int> nse(n);
        vector<int> nge(n);
        vector<int> pge(n);

        stack<int> st;

        // PSE = Previous Smaller or Equal
        for (int i = 0; i < n; i++) {

            while (!st.empty() && nums[st.top()] > nums[i]) {
                st.pop();
            }

            if (st.empty()) {
                pse[i] = -1;
            }
            else {
                pse[i] = st.top();
            }

            st.push(i);
        }

        while (!st.empty()) {
            st.pop();
        }

        // NSE = Next Strictly Smaller
        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }

            if (st.empty()) {
                nse[i] = n;
            }
            else {
                nse[i] = st.top();
            }

            st.push(i);
        }

        while (!st.empty()) {
            st.pop();
        }

        // PGE = Previous Greater or Equal
        for (int i = 0; i < n; i++) {

            while (!st.empty() && nums[st.top()] < nums[i]) {
                st.pop();
            }

            if (st.empty()) {
                pge[i] = -1;
            }
            else {
                pge[i] = st.top();
            }

            st.push(i);
        }

        while (!st.empty()) {
            st.pop();
        }

        // NGE = Next Strictly Greater
        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }

            if (st.empty()) {
                nge[i] = n;
            }
            else {
                nge[i] = st.top();
            }

            st.push(i);
        }

        long long minSum = 0;
        long long maxSum = 0;

        for (int i = 0; i < n; i++) {

            long long leftMin = i - pse[i];
            long long rightMin = nse[i] - i;

            long long leftMax = i - pge[i];
            long long rightMax = nge[i] - i;

            minSum += nums[i] * leftMin * rightMin;
            maxSum += nums[i] * leftMax * rightMax;
        }

        return maxSum - minSum;
    }
};