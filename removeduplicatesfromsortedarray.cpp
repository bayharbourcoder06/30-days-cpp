class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int pos = 0;
        for (int i = 1; i < (int) nums.size(); i++) {
            if (nums[pos] != nums[i]) {
                pos++;
                nums[pos] = nums[i];
            }
        } 
        return pos + 1;
    }
};
