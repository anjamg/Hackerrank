#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    long int n,m,s,x;
    for (int i=0; i<t;i++){
        cin >> n >> m >> s;
        x=(s+m-1)%n;
        if (x==0){
            x=n;
        }
        cout << x << endl;
    }
    return 0;
}
