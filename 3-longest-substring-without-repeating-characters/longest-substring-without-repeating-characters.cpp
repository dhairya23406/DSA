class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charset;
        int l=0;
        int res=0;
        int n=s.length();

        for(int i=0;i<n;i++){
            while(charset.find(s[i])!=charset.end()){
                charset.erase(s[l]);
                l+=1;
            }
            charset.insert(s[i]);
            res=std::max(res,i-l+1);
        }
        
        return res;
    }
};