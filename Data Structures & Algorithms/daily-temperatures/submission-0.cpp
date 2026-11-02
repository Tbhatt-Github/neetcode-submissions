class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 1);
        for (int i=0; i<n; i++){
            int currtemp = temperatures[i];
            for (int j=i+1; j<n; j++){
                if (temperatures[j] > currtemp){
                    break;
                }
                ans[i]++;
            }
            if (ans[i] + i == n){
                ans[i] = 0;
            }
        }
        return ans;
    }
};
