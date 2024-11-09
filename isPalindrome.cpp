class Solution {
public:
    bool isPalindrome(int x) {
        string xNew = to_string(x);
        int size = xNew.size();
        for (int i = 0; i < size; i++) {
            if ((i + 1) != size / 2 && xNew[i] != xNew[size - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};