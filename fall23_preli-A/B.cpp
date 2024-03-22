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
    ll x, p, a, i, f=0;
    cin >> x >> p;
    for(i=0; i<x; i++){
        cin >> a;
        if(a == p){
            f=1;
        }
    }
    if(f==1) cout << "Senti Aunti Ramva will never be mine\n";
    else cout << "Senti Aunti Ramva is mine\n";
    return 0;
}