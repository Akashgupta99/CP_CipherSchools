#include<bits/stdc++.h>
using namespace std;

bool Meeting(int& x1, int& v1, int& x2, int& v2){
    while(x1 != x2){
        if ((x1>x2 && v1>v2) || (x2>x1 && v2>v1)){   // Check if either of the (start,speed) is greater than the other
            return false;
        }
        else{
            x1 = x1 + v1;
            x2 = x2 + v2;
            if(x1 == x2){
                return true;
            }
        }
    }
    return true;
}
int main(){
    int x1 = 6, v1 = 7, x2 = 4, v2 = 8;
    if(Meeting(x1,v1,x2,v2)){
        cout<< "Yes"<< endl;
    }
    else{
        cout<< "No"<<endl;
    }
    return 0;
}