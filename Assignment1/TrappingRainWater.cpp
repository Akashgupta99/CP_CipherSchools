#include<bits/stdc++.h>
using namespace std;

int RainWater(const vector<int> &vec)
{
    int size = vec.size();
    vector<int> r(size);
    int l = vec[0];
    r[size - 1] = vec[size - 1];
    for (int j = size - 2; j >= 0; j--)
    {
        r[j] = max(r[j + 1], vec[j]);
    }

    int count = 0;
    for (int i = 0; i < size; i++) {
        l = max(l, vec[i]);
        count += (min(l, r[i]) - vec[i]);
    }

    return count;
}

int main()
{
    vector<int> vec = {4,6,5,8,18,2,6};
    int count = RainWater(vec);
    cout<< count<< endl;
    return 0;
}