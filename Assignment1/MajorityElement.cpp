#include <bits/stdc++.h>
using namespace std;

int Majority(vector<int>& vec)
{
    int count = 0;
    int e = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (count == 0)
        {
            e = vec[i];
        }
        if (e == vec[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return e;
}
int main()
{
    vector<int> vec = {2,4,3,5,4,5,4,4,6,4,4,4,4,6,4,4,4};
    cout << Majority(vec) << endl;
}