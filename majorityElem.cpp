#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[],int size){
    unordered_map<int,int> umap;
    int majority;
    for(int i=0;i<size;i++){
        umap[arr[i]]++;
        if(umap[arr[i]] > size/2)
        majority = arr[i];
    }
    
    for(auto i =umap.begin();i!=umap.end();i++){
        cout << i->first << " : " << i->second <<"\n";
    }
    return majority;
}

int main(){
    int a[] = {2, 2, 1, 1, 1, 2, 2}; 
    int n = sizeof(a) / sizeof(int); 
    
    cout << majorityElement(a,n);
    
    return 0;
}
