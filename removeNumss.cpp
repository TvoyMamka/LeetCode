class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int res = 0;
        int size = nums.size();
        for (int i = 0; i < size;) {
            if (nums[i] == val) {
                res++;
                for (int j = i; j < size - 1; j++) {
                    nums[j] = nums[j + 1];
                }
                size--;
            }
            else { i++; }
        }
        return (size);
    }

};