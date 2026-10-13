class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
         k=k%n;
       vector<int> copy=nums;
        int x=k;
       for(int i=0;i<x;i++){
        nums[k-1]=copy[n-1-i];
        k--;
       }
       for(int i=x;i<n;i++){
        nums[i]=copy[i-x];
       }
    }
};