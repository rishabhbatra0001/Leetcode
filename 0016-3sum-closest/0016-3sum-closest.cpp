class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end());
        int ans = nums[0] + nums[1] + nums[2];

        for (int i = 0 ; i < nums.size() ; i++){
            if (i > 0 and nums[i] == nums[i - 1])continue;
            int j = i + 1 , k = nums.size() - 1;
            while (j < k){
                int sum = nums[i] + nums[j] + nums[k];

                if (abs(target - sum) <= abs(target - ans)){
                    ans = sum;
                }
                if (sum < target)j++;
                else if (sum > target)k--;
                else return target;
                
            }

        }
        return ans;
    }
};