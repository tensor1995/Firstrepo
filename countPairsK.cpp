/**https://ide.geeksforgeeks.org/uMViVdo91x*/

#include <bits/stdc++.h>
using namespace std;

int countPairsProduct(vector<int> &arr,int k){
    int l = 0;
    int r = arr.size() - 1;
    int count = 0;
    while(l < r){
        if(arr[l]*arr[r] < k){
            count = count + (r-l);
            l++;
        }
        else{
            r--;
        }
    }
    return count;
}

int main(){
    vector<int> vec{2,3,4,6,9};
    int k = 20;
    
    cout << countPairsProduct(vec,k);
    return 0;
}
