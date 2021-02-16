#include<bits/stdc++.h>
using namespace std;

void AlternateSorting(vector<int>& vec, vector<int>& newvec){
    int s = 0, e = vec.size() - 1;
    while(s < e){
        newvec.push_back(vec[e]);
        newvec.push_back(vec[s]);
        s++;
        e--;
    }

    if(s == e){
        newvec.push_back(vec[e]);
    }
}
int main(){
    vector<int> vec = {1,3,2,6,3,7,4,8};
    sort(vec.begin(), vec.end());
    vector<int> newvec;
    AlternateSorting(vec, newvec);
    for(int i = 0; i < newvec.size(); i++){
        cout<< newvec[i]<< " ";
    }
    return 0;
}