class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<int> res;
        for (int i = 0 ; i < nums.size() - 1 ; i++){
            for (int j = nums[i] + 1 ; j < nums[i + 1] ; j++){
                res.push_back(j);
            }
        }
        return res;
    }
};