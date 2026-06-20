class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;

        int f_0 = 0;
        int f_1 = 1;

        for (int i = 2; i <= n; ++i) {
            int curr = f_0 + f_1;
            f_0 = f_1;
            f_1 = curr;
        }

        return f_1;
    }
};
