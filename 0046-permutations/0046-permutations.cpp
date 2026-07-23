class Solution {
public:
    vector<vector<int>> ans;

    void F(int x, vector<int>& nums) {
        // Stopping point
        if (x == nums.size()) {
            ans.push_back(nums);
            return;
        }

        // Swap current position with every possible element
        for (int i = x; i < nums.size(); i++) {
            swap(nums[x], nums[i]);

            F(x + 1, nums);

            swap(nums[x], nums[i]);  // Backtrack
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        F(0, nums);
        return ans;
    }
};