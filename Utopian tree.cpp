#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    int a,b,c,h;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        h=1;
        if (n%2 == 0){
            b=n/2;
            for (c=0;c<=b-1;c++){
                a=h*2;
                h=a+1;
            }
            //a=((h*2)+h);
            cout  << h << endl;
        }else {
            b=n/2;
            for (c=0;c<=b-1;c++){
                a=h*2;
                h=a+1;
            }
            h=h*2;
            cout  << h << endl;
        }
    }
    return 0;
}
