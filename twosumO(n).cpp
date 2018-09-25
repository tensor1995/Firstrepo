class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> umap;
        
        for(int i=0;i<nums.size();i++){
            umap.insert(make_pair(nums[i],i));
        }
        
        for(int i=0;i<nums.size();i++){
            int trimmed = target - nums[i];
            
            if(umap.find(trimmed)!=umap.end() && umap[trimmed]!=i){
                return {i,umap[trimmed]};
            }
        }
    }
};