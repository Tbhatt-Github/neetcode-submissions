class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int left = 0;
        int right = n-1;
        int leftmax = height[left];
        int rightmax = height[right];
        while (left < right){
            if (leftmax <= rightmax){
                left++;
                leftmax = max(leftmax, height[left]);
                ans += leftmax - height[left];
            }
            else{
                right--;
                rightmax = max(rightmax, height[right]);
                ans += rightmax - height[right];
            }
        }
        return ans;
    }
};
