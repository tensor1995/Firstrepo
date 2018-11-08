#include <bits/stdc++.h>

using namespace std ;

bool subSumHashed(vector<int> &arr){
    unordered_set<int> uset;
    int sum = 0;
    
    for(int i=0;i<arr.size();i++){
        sum = sum + arr[i];
        
        if(sum == 0 || uset.find(sum)!=uset.end())
          return true;
          
          
          uset.insert(sum);
    }
    return false;
}

int main(){
    vector<int> arr{-3, 2, 3, 1, 6};
    cout << subSumHashed(arr) <<endl;
    
    return 0;
}
