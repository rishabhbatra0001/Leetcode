class Solution {
public:
    int maxProduct(int n) {
        int prod = 1;
        int x = n;
        vector<int> dig;
        while (x > 0){
            int rem = x % 10;
            x/=10;
            dig.push_back(rem);
        }
        sort(dig.begin() , dig.end());
        return dig[dig.size() - 2] * dig[dig.size() - 1];
    }
};