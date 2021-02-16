#include<bits/stdc++.h>
using namespace std;

int MinPlatform(vector<int>& ar,vector<int>& dep) {
    sort(ar.begin(), ar.end());
    sort(dep.begin(), dep.end());
    int i = 1, j = 0;
    int curr = 1, min = 1;
    while (i < ar.size() && j < dep.size()) {
        if (ar[i] >= dep[j]) {
            // train 11:00 | dept 10:50
            curr -= 1;
            j++;
        } else {
            // train 11:00 | dept 11:30
            curr += 1;
            i++;
        }

        min = max(min, curr);
    }

    return min;
}
int main() {
    vector<int> ar = {900, 915, 1050, 1250, 1420};
    vector<int> dep = {1040, 1000, 1100, 1600, 1350};
    int min = MinPlatform(ar,dep);
    cout<< min<< endl;
    return 0;
}