class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int sum = 0;
        vector<int> dp(A.size(),0);
        for(int i=2;i<A.size();i++){
            if(A[i] - A[i-1] == A[i-1]-A[i-2]){
                dp[i] = 1+ dp[i-1];
                sum = sum + dp[i];
            }
        }
        return sum;
    }
};
