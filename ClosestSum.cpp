/**https://ide.geeksforgeeks.org/17f8TCkhuX*/

#include <bits/stdc++.h>
using namespace std;

void printClosestSum(vector<int> &arr,int X_val){
    int new_l , new_r;
    
    int l = 0,r = arr.size()-1,diff = INT_MAX;
    
    while(l < r){
        if( abs(arr[l]+arr[r]-X_val) < diff ){
            new_l = l;
            new_r = r;
            diff = abs(arr[l] + arr[r] - X_val);
        }
        
        if(arr[l] + arr[r] > X_val)
            r--;
        else
            l++;
    }
    
    cout << arr[new_l] << " " << arr[new_r] <<"\n";
}

int main(){
        vector<int> arr{10, 22, 28, 29, 30, 40};
        int x = 54;
        printClosestSum(arr,x);
        return 0;
}
