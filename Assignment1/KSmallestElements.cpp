#include<bits/stdc++.h>
using namespace std;


int partition(vector<int>& vec, int s, int e){
    int pivot = vec[e];
    int i = s - 1;
    for(int j = s; j <= e -1; j++){
        if(pivot >= vec[j]){
            i += 1;
            swap(vec[i], vec[j]);
        }
    }

    swap(vec[i+1], vec[e]);
    return i+1;
}
void sorting(vector<int>& vec, int s, int e){


    if(s<e){
        int pivot = partition(vec,s,e);
        sorting(vec, s, pivot-1);
        sorting(vec, pivot+1, e);
    }
}
int main(){
    vector<int> vec = {1,4,2,6,3,8,5,9,12};
    int K = 3;
    sorting(vec, 0, vec.size()-1);
    for(int i = 0; i< 3; i++){
        cout<< vec[i]<<endl;
    }
    return 0;
}