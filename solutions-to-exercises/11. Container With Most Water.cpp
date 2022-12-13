//11. Container With Most Water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() -1;
        int area;
        int max_ar = 0;
        while(left<right){
            area = min(height[left], height[right])*(right-left);
            if(area>max_ar) max_ar = area;

            if(min(height[right],height[left])==height[left])
                left++;
            else right--;    
        }
        return max_ar;
    }
};
