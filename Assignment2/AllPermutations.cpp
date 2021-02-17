#include<bits/stdc++.h>
using namespace std;


void Permutation(vector<string>& res, string str, int s, int e){
    if(e == s){
        res.push_back(str);
    }
    else{
        for(int i = s; i <= e; i++){
            swap(str[i], str[s]);
            Permutation(res, str, s + 1, e);
            swap(str[i], str[s]);
        }
    }
}
int main(){
    vector<string> res;
    string str;
    cout<<"Enter a string to find all permutations: ";
    cin>>str;
    Permutation(res, str, 0, str.size() - 1);
    for(int i = 0; i < res.size(); i++){
        cout<< res[i]<<" ";
    }
    return 0;
}