class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        int n = heights.size();
        int left = 0;
        int right = n-1;
        while (left < right){
            int area = min(heights[right],heights[left])*(right-left);
            ans = max(ans, area);

            if (heights[left] < heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return ans;
    }
};
