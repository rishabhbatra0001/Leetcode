class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> a;
        int n = nums.size();
        for (int i = 0 ; i < n ; i++){
            int ce = abs(nums[i]) - 1;
            if(nums[ce] > 0)
            nums[ce] = -nums[ce];
        }

        for (int i = 0 ; i < n ; i++){
            if (nums[i] > 0)a.push_back(i + 1);
        }
        return a;
    }
};