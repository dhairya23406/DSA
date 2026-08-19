class Solution {
public:
    int mySqrt(int x) {
       int l=0;
       int r=x;
       int ans=0;
       
       while(l<=r){
        int m=l+(r-l)/2;
       long long sq=1LL*m*m;
        if(sq>x){
            r=m-1;
        }
        else if(sq<x){
            l=m+1;
            ans=m;
        }
        else{
            return m;
        }
       }
       return ans;
    }
};