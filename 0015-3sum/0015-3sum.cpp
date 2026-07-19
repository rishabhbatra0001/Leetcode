class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());
        int n = nums.size();
        for (int i = 0 ; i < n ; i++){
            if(i > 0 and nums[i] == nums[i - 1])continue;
            int p = i + 1 , q = n - 1;
            while (p < q){
                long long sum = (long long)nums[i] + (long long)nums[p] + (long long)nums[q];
                if (sum < 0)p++;
                else if (sum > 0)q--;
                else{
                    ans.push_back({nums[i] , nums[p] , nums[q]});
                    p++;q--;

                    while (p < q and nums[p] == nums[p - 1])p++;
                    while (p < q and nums[q] == nums[q + 1])q--;
                }
            }
        }
        return ans;
    }
};