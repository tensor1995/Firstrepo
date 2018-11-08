  //Input: arr[] = {-10, -5, 0, 3, 7}
   // arr[i] = i
#include <iostream>
#include <vector>
using namespace std;

int fixedPoint(int low ,int high, vector<int> &arr){
    if(low<=high){
        
        int mid = (low + high)/2;
        if(arr[mid] == mid)
        return mid;
        
        if(arr[mid] > mid)
       return fixedPoint(low,(mid-1),arr);
        else
        return fixedPoint((mid+1),high,arr);
    }
    return -1;
}

int main(){
    vector<int> arr {-10, -1, 0, 3, 10, 11, 30, 50, 100};
    int size = arr.size()-1;
    cout << fixedPoint(0,size,arr);
    
    return 0;
}
