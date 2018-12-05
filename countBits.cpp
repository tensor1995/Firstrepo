/** Problem : Given a non negative integer number num. 
For every numbers i in the range 0 ≤ i ≤ num calculate the number of 1's in their binary representation 
and return them as an array.

Example 1:

Input: 2
Output: [0,1,1]

Example 2:

Input: 5
Output: [0,1,1,2,1,2]

Follow up:

    It is very easy to come up with a solution with run time O(n*sizeof(integer)). But can you do it in linear time O(n) /possibly in a single pass?
    Space complexity should be O(n).
    Can you do it like a boss? Do it without using any builtin function like __builtin_popcount in c++ or in any other language.
**/

/* Coming up with a Naive Solution is pretty easy.
   But the Naive Solution Slows down when the input is large Enough.
   
   So, How do we Improve?
   
   Upon Pondering for a while and looking at the hints,We come up with a Dynamic Programming Solution.
   TAKE A PEN AND A PAPER AND TRY TO SOLVE IT ON YOUR OWN
   
   */




class Solution {
public:
    
    bool check_if_powerOf_2(int num){  /* this checks whether a number is a power of 2 or not */
    return ( num&(num-1)) == 0;
}
    
    vector<int> countBits(int num) {

    vector<int> dp(num+1); /* Make a Cache */

    dp[0] = 0; /* Initial Conditions */ 
    dp[1] = 1;

    int current_val = 2; /* set currentvalue as 2 */
    int nearest_powa_of_2 = 2;  /* Nearest power will also be 2 for now */

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
