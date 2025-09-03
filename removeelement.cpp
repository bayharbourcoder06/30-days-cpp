class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c = count(nums.begin(), nums.end(), val);
    
        for (int i = 0; i < (int)nums.size(); i++){
            if (nums[i] == val){
                int j = i+1;
                while (j < (int)nums.size() && nums[j] == val){
                    j++;
                }
                if (j < (int) nums.size()){
                    nums[i] = nums[j];
                    nums[j] = val;
                }
            }
        }
        return (int) nums.size() - c;
    }
};
