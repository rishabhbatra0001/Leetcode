class Solution {
public:
    vector<vector<int>> ans;

    void F(int x, int n, vector<int>& nums) {
        if (x == n) {
            ans.push_back(nums);
            return;
        }

        for (int i = x; i < n; i++) {
            swap(nums[x], nums[i]);

            F(x + 1, n, nums);

            swap(nums[x], nums[i]); // Backtrack
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();

        F(0, n, nums);

        return ans;
    }
};