class Solution {
public:
    bool judgeSquareSum(int c) {
        int n = sqrt(c);
        int A[n + 1];
        for (int i = 0 ; i <= n ; i++){
            A[i] = i;
        }

        long long a = 0 , b = n;
        while (a <= b){
            long long sum = 1LL * A[a] * A[a] + 1LL * A[b] * A[b];
            if (sum == c)return true;
            if (sum < c)a++;
            else if(sum > c) b--;
        }
        return false;
    }
};