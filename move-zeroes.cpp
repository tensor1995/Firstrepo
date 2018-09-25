class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int count_zeroes = 0;
        
        for(int i =0;i<nums.size();i++){
            if(nums[i]== 0)
                count_zeroes++;
            else{
                nums[i-count_zeroes] = nums[i];
            }
        }
        
         for(int i=nums.size()-1;i>((nums.size()-1)-count_zeroes);i--){
             nums[i] = 0;
         }
        
    }
};