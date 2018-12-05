class Solution {
public:
    
    bool check_if_powerOf_2(int num){
    return ( num&(num-1)) == 0;
}
    
    vector<int> countBits(int num) {

    vector<int> dp(num+1);

    dp[0] = 0;
    dp[1] = 1;

    int current_val = 2;
    int nearest_powa_of_2 = 2;

    while(current_val<=num){

        if(check_if_powerOf_2(current_val)){
            nearest_powa_of_2 = current_val;
        }
        else{
            nearest_powa_of_2 = nearest_powa_of_2;
        }

        dp[current_val] = dp[current_val - nearest_powa_of_2] + 1;

        current_val++;
    }

    return dp;
}
};
