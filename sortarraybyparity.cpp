class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        vector<int> res;
        vector<int> temp;
        
        for(int i=0;i<A.size();i++){
            if(A[i]%2 == 0){
                res.push_back(A[i]);
                
            }
            else{
                temp.push_back(A[i]);
            }
        }
        
     res.insert(res.end(),temp.begin(),temp.end());
        
        return res;
        
        
        
        
    }
};
