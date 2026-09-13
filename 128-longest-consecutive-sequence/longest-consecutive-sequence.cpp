class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp(nums.begin(),nums.end());
        int ans=0;
        for(int n :mp){
            if(!mp.count(n-1)){
                int len=1;
                while(mp.count(n+len)){
                    len++;
                }
                ans=max(ans,len);
            }
        }
        return ans;
    }
};