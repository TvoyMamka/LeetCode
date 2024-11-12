class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto it = find(nums.begin(), nums.end(), target);
        if (it == nums.end()) {
            nums.push_back(target);
            sort(nums.begin(), nums.end());
            it = find(nums.begin(), nums.end(), target);
            return it - nums.begin();
        }
        else {
            return it - nums.begin();
        }
    }

};