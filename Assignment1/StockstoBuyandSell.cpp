#include<bits/stdc++.h>
using namespace std;

int StockBuySell(vector<int>& StockPrice) {
    int min = StockPrice[0], profit = 0;
    for (int i = 1;  i < StockPrice.size(); i++) {
        if (min <= StockPrice[i]) {
            int temp = 0;
            temp = StockPrice[i] - min;
            profit = max(profit, temp);
        } else {
            min = StockPrice[i];
        }
    }

    return profit;
}
int main() {
    int profit;
    vector<int> StockPrice = {205, 306, 90, 101, 100, 91, 480, 500};
    profit = StockBuySell(StockPrice);
    cout<< profit<< endl;
    return 0;
}