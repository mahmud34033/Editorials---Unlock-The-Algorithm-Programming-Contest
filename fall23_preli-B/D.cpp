// Minimum coin exchange

#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <string>
#include <numeric>
#define ll long long
#define nl endl
using namespace std;

int main(){
    long int n, h;
    cin >> n >> h;
    long int pins[n];
    for(int i=0; i<n; i++) cin >> pins[i];
    sort(pins, pins+n, greater<int>());
    long int a[h];
    long int cnt=0;

    for(int i = 0; i < n; i++){
        while(h >= pins[i]){
            cnt+=h/pins[i];
            h = h%pins[i];
        }
        if(h==0) break;
    }

    if(cnt > 1) cout << cnt << " pins" << nl;
    else cout << cnt << " pin" << nl;
    
    return 0;
}