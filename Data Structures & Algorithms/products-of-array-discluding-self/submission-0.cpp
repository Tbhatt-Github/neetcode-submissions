class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int netprod = 1;
        for (auto n:nums){
            netprod *= n;
        }
        vector<int> output;
        for (int i=0; i<nums.size(); i++){
            if (nums[i] != 0){
                output.push_back(netprod/nums[i]);
            }
            else{
                int temp = 1;
                int count = 0;
                while(count < nums.size()){
                    if (count != i){
                        temp *= nums[count];
                    }
                    count++;
                }
                output.push_back(temp);
            }
        }
        return output;
    }
};
