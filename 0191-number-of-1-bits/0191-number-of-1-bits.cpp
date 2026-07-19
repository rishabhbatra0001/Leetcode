class Solution {
public:
    int hammingWeight(int n) {
        int sum = 0;

        while (n > 0){
            int bit = n&1;
            if (bit == 1)sum++;
            n>>=1;
        }
        return sum;
    }
};