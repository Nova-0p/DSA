class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = n - 1;
        string result = "";
        while (i >= 0) {

            while (i >= 0 && s[i] == ' ') {    // this is to remove spaces if there are at end
                i--;
            }                     
            if (i < 0) {  // check if we reached beginning
                break;
            }
            int j = i;  // end of current word;
            
            while (i >= 0 && s[i] != ' ') {  // start of current word (moving left until we find space)
                i--;
            }
            string word = s.substr(i + 1, j - i);  // create substring from i+1 to j-1;

            if (!result.empty()) {   // add space but only if there if there is already a word 
                result += " ";       // so that we dont add spacw before first word
            }

            result += word;
        }
        return result;
    }
};