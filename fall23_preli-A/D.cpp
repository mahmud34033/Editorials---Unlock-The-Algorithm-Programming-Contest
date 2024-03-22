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
    long int n, p;
    cin >> n >> p;
    long int coins[n];
    for(int i=0; i<n; i++) cin >> coins[i];
    sort(coins, coins+n, greater<int>());
    // long int a[p];
    long int cnt=0;

    for(int i = 0; i < n; i++){
        while(p >= coins[i]){
            p = p%coins[i];
            // a[cnt] = coins[i];
            cnt++;
        }
        if(p==0) break;
    }

    if(cnt > 1) cout << "Tami will be back after " << cnt << " days" << nl;
    else cout << "Tami will be back after " << cnt << " day" << nl;
    
    return 0;
}