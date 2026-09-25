class Solution {
public:
    bool isUgly(int n) {
        if(n<=0) return false;
        vector<int> ans={2,3,5};
        for(int x: ans){
            while( n%x==0){
                n=n/x;
            }
        }
        return n==1;
    }
};