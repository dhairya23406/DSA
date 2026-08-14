class Solution {
public:
    int findMin(vector<int>& nums) {
        int n= nums.size();
        int a=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                a+=i;
                break;
            }
        }
        return nums[a];
    }
};