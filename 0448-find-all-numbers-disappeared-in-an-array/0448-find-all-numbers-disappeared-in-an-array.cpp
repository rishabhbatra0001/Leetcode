class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> a;
        for (int i = 1; i < nums[0]; i++) {
            a.push_back(i);
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = nums[i] + 1; j < nums[i + 1]; j++) {
                a.push_back(j);
            }
        }
        for (int i = nums[n - 1] + 1; i <= n; i++) {
            a.push_back(i);
        }

        return a;
    }
};