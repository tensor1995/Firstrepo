class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        
        if(height.size()==0){
            return maxarea;
        }
        
        int left = 0;
        int right = height.size()-1;
        
        while(left < right){
            
            int area = min(height[right],height[left]) * (right - left);
            maxarea = max(maxarea,area);
            
            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
            
            
        }
        return maxarea;
        
    }
};