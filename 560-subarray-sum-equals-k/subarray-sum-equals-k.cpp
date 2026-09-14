class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    
        
        int res=0;
        int cursum=0;
        unordered_map<int,int> mp;
        mp[0]=1;

        for(int x:nums){
            cursum+=x;
            int diff=cursum-k;
            if(mp.find(diff)!=mp.end()){
                res+=mp[diff];
            }
            mp[cursum]++;
        }
        return res;
    }
};