#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,l,j;
    cin >> n;
    int m=5;
    l=0;
    for (int i=0;i<n;i++){
        j=floor(m/2); /*arrondissement à l'inférieur*/
        m=j*3;
        l=l+j;
    }
    cout << l;
    return 0;
}
