class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int> intersection;
        int n1 = nums1.size();
        int n2 = nums2.size();

        for(int i = 0 ; i < n1 ; i++){
            for (int j = 0 ; j < n2;j++){
                if (nums1[i] == nums2[j]){
                    bool exist = false;
                    for (int k = 0; k < intersection.size();k++){
                        if (intersection[k] == nums1[i]){
                            exist = true;
                            break;
                        }
                    }
                    if (!exist){
                        intersection.push_back(nums1[i]);
                    }
                    break;    
                }
            }
        }
        return intersection;
    }
};