class Solution {
public:
    long long sumAndMultiply(int n) {
        long long nonZero = 0;
        long long sum = 0;
        long long place = 1;
        while(n > 0){
            long long rem = n % 10;
            n/=10;
            if (rem != 0){
                nonZero += rem * place;
                place*=10;
                sum+=rem; 
            }
        }
        return sum * nonZero;
    }
};