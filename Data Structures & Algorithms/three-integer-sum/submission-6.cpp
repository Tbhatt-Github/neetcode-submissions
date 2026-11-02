class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> s;
        vector<vector<int>> ans;
        for (int i=0; i<n-2; i++){
            int target = -nums[i];
            for (int j=i+1; j<n-1; j++){
                for (int k=j+1; k<n; k++){
                    if (nums[j] + nums[k] == target){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        sort(temp.begin(), temp.end());
                        s.insert(temp);
                    }
                }
            }
        }
        for (auto t:s){
            ans.push_back(t);
        }
        return ans;
    }
};
