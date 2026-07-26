class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<pair<int,int>> st;
        vector<int> res(temperatures.size(), 0);

        for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[i]>st.top().first){
                int stackTemp = st.top().first;
                int stackIndex = st.top().second;
                st.pop();
                res[stackIndex] = i - stackIndex;
            }
            st.push({temperatures[i], i});
        }
        return res;
    }
};