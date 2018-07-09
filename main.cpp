#include <bits/stdc++.h>

using namespace std;

int find_lonely(vector<int> v)
{
    int res = 0;
    for(int i=0;i<(signed)v.size();i++)
    {
        res = res^v[i];
    }

    return res;
}

int main()
{
    vector<int> vec{1,2,3,3,2,1,8};

    cout << find_lonely(vec);
}
