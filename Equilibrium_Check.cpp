#include <bits/stdc++.h>

using namespace std ;

int Equilibrium(vector<int> v)
{
    int left_sum = 0;
    int sum = 0;
    for(int i=0;i<(signed)v.size();i++){
        sum+= v[i];
    }

    for(int i=0;i<(signed)v.size();i++){
        sum = sum - v[i];

        if(sum == left_sum)
            return i;

        left_sum+=v[i];
    }

    return -1;

}


int main()
{
    vector<int> vec{-7,1,5,2,-4,3,0};

    cout << Equilibrium(vec) ;

    return 0;
}
