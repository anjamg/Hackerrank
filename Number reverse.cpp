#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,j,k;
    cin >> i >> j >> k;
    int x, n, reverse, d=0;
    for (n=i; n<j+1; n++){
      int r=n;
      reverse=0;
      while (r != 0){
      //reverse = reverse * 10;
      //cout << n << endl;
      reverse = reverse*10 + r%10;
      r      = r/10;
      }
      x=abs (n-reverse);
      if(x%k ==0){
         d=d+1;
      }
    }
    cout << d;
    return 0;
}
