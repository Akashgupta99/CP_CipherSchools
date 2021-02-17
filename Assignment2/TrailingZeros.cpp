#include<bits/stdc++.h>
using namespace std;
int countTrailingZeros(int n) {
   int count = 0;
   for (int i = 5; n % i == 0; i *= 5){
      count++;
   }
   return count;
}
main() {
   int n = 12000;
   cout << countTrailingZeros(n);
}