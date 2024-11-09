class Solution {
public:
    bool isValid(string s) {
        int dotCounter = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i; j < s.size(); j++) {
                if (s[i] == '(' && s[j] == ')' || s[i] == '[' && s[j] == ']' || s[i] == '{' && s[j] == '}') {

                    s[i] = '.';
                    s[j] = '.';
                    dotCounter += 2;
                }

            }
        }
        if (dotCounter == s.size()) { return true; }
        return false;
    }
};