class Solution {
public:
    int lengthOfLastWord(string s) {
        size_t found = s.find_last_of("aqzxswedcvfrtgbnhyujmkiolpQAZSWXEDCRFVTGBYHNUJMIKLOP");
        for (int i = found - 1; i > -1; i--) {
            if (s[i] == ' ') {
                return found - i;
            }
            if (i == 0) {
                return found - i + 1;
            }
        }
        return 1;
    }
};