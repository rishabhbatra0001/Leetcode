class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        int ans = 0;
        int l = 0 , r = n - 1;
        int max1 = 0 , max2 = 0;

        while (l < r){
            max1 = max(max1 , height[l]);
            max2 = max(max2 , height[r]);

            if (max1 < max2){
                ans+= max1 - height[l];
                l++;
            }
            else{
                ans+= max2 - height[r];
                r--;
            }
        }

        return ans;
};
};