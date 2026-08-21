class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        for (int asteroid : asteroids) {

            while (!st.empty() && st.back() > 0 && asteroid < 0) {

                if (st.back() < -asteroid) {
                    st.pop_back();
                }
                else if (st.back() == -asteroid) {
                    st.pop_back();
                    asteroid = 0;
                }
                else {
                    asteroid = 0;
                }
            }

            if (asteroid != 0) {
                st.push_back(asteroid);
            }
        }

        return st;
    }
};