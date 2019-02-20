#include <bits/stdc++.h>
using namespace std;

void removedups(vector<int> &arr){
    unordered_map<int,bool> umap;
    for(int i=0;i<arr.size();i++){
        if(umap.find(arr[i]) == umap.end()){
            cout << arr[i];
        }
        umap[arr[i]] = true;
    }
    
}

int main(){
    vector<int> arr{ 1, 2, 5, 1, 7, 2, 4, 2 };
    removedups(arr);
    return 0;
} 
