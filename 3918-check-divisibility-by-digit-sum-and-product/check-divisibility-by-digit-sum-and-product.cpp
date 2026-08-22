class Solution {
public:
    bool checkDivisibility(int n) {
        int a=n;
        int sd = 0;
        int pd = 1;

        while (a > 0) {
            int rem = a % 10;
            a /= 10;
            sd += rem;
            pd *= rem;
        }
        return n % (sd + pd) == 0;
         
    }
};