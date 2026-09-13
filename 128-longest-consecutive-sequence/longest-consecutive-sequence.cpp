class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        int n=nums.size();
        int count=1;
        int ans=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]==nums[i-1]+1) count++;
            else count=1;
            ans=max(ans,count);
        }
        return ans;

    }
};