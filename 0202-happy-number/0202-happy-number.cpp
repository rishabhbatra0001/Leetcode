class Solution {
public:
    bool isHappy(int n) {
        int sum;
        while (true){
            sum = 0;
            while(n != 0){
                sum += (n % 10) * (n % 10);
                n/=10;
            }
            n = sum;
            if (n == 1)return true;
            if (n == 4)return false;
        }
    }
};