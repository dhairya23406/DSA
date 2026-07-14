class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        std::unordered_map<char, int> c;
        
        for(int i=0;i<n;i++){
            c[s[i]]++;
        }
        for(int i=0;i<n;i++){
            if(c[s[i]]==1) return i;
        }
        return -1;
    }
};