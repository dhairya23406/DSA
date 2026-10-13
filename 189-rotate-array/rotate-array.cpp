class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
         k=k%n;
       vector<int> copy=nums;
       for(int i=0;i<k;i++){
        nums[i]=nums[n-k+i];
       }
       for(int i=k;i<n;i++){
        nums[i]=copy[i-k];
       }
    }
};