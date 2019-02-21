#include <bits/stdc++.h>
using namespace std;

bool findTriplet(vector<int> &arr,int sum){
    
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<arr.size();i++){
        int l = i+1;
        int r = arr.size()-1;
        
        while(l < r){
            if(arr[i] + arr[l] + arr[r] == sum){
                cout << arr[i] <<" " <<arr[l]<<" " << arr[r] <<"\n";
                return true;
            }
            if( arr[i] + arr[l] + arr[r] > sum){
                r--;
            }
            else{
                l++;
            }
        }
    }
    return false;
}

int main(){
    vector<int> vec{1,4,45,6,10,8};
    
    int sum = 22;
    findTriplet(vec,sum);
    return 0;
}
