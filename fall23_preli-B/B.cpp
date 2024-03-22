// Seraching

#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <string>
#include <numeric>
#define ll long long
#define nl endl
using namespace std;

int main(){
    ll m, n, a, i, f=0;
    cin >> m >> n;
    for(i=0; i<m; i++){
        cin >> a;
        if(a == n){
            f=1;
        }
    }
    if(f==0) cout << "Really! I did not know that!\n";
    else cout << "I know! Nobody will get it\n";
    return 0;
}