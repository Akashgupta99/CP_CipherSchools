#include <bits/stdc++.h>
using namespace std;

void ParanthesisGenerate(vector<string>& vec, int open, int close, int n, string str) {
    if (open < 0 || close < 0 || open > n || close > n || close > open) {
        return;
    }
    if (open == n && close == n) {
        vec.push_back(str);
        return;
    }

    ParanthesisGenerate(vec, open + 1, close, n, str + "(");  // Calling for open brackets
    ParanthesisGenerate(vec, open, close + 1, n, str + ")");  // Calling for close brackets
}

int main() {
    vector<string> vec;
    ParanthesisGenerate(vec, 0, 0, 5, "");
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << "\n";
    }
    return 0;
}