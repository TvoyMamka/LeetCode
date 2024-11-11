class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string res = "";

        sort(strs.begin(), strs.end());
        string fStr = strs[0];
        string eStr = strs[strs.size() - 1];
        for (int i = 0; i < fStr.size(); i++) {
            if (fStr[i] == eStr[i]) {
                res += eStr[i];
            }
            else {
                break;
            }
        }

        return res;
    }
};