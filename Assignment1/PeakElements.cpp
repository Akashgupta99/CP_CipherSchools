#include<bits/stdc++.h>
using namespace std;

int FindPeak(vector<int> vec, int low, int high, int size){
    int mid;
    mid = low + (high - low)/2;

    if((vec[mid] >= vec[mid - 1] || mid == 0) && (vec[mid] >= vec[mid + 1] || mid == size - 1)){
        return mid;
    }
    else if(vec[mid] < vec[mid - 1] && mid > 0){
            return FindPeak(vec, low, mid - 1, size);
        }
    else{
        return FindPeak(vec, mid + 1, high, size);
    }
}

int main(){
    vector<int> vec = {1,2,3,5,6,10,9};
    int mid = FindPeak(vec, 0, vec.size() - 1, vec.size());
    cout<< vec[mid]<< endl;
    return 0;
}