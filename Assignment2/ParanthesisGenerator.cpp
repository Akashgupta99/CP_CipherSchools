#include <bits/stdc++.h>
using namespace std;

void ParanthesisGenerate(int open, int close, int n, string str) {
    if (open < 0 || close < 0 || open > n || close > n || close > open) {
        return;
    }
    if (open == n && close == n) {
        cout<< str<<endl;
        return;
    }

    ParanthesisGenerate(open + 1, close, n, str + "(");  // Calling for open brackets
    ParanthesisGenerate(open, close + 1, n, str + ")");  // Calling for close brackets
}

int main() {
    ParanthesisGenerate(0, 0, 3, "");
    return 0;
}