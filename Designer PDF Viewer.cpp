#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int n;
    n= word.length();
    vector<int> as(n);
    int a,b,c;
    b=0;
    for(int i = 0; i < n; i++){
       a = (int) word[i] - 97;
       as[i] = h [a];
       cin >> as[i];
       if(b<as[i]){
           b=as[i];
       }
    }
    c=b*n;
    cout << c;
    return 0;
}
