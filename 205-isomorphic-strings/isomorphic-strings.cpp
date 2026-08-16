class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int m1[256] = {0};
        int m2[256] = {0};

        for (int i = 0; i < s.size(); i++) {

            // Characters must have the same previous occurrence
            if (m1[s[i]] != m2[t[i]]) {
                return false;
            }

            // Store current position (+1 because 0 means "not seen")
            m1[s[i]] =i+1;
            m2[t[i]] =i+1;
        }

        return true;
    }
};