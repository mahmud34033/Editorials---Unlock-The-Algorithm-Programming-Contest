// Sorting

#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <string>
#include <numeric>
#define ll long long
#define nl endl
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], id;
    for(int i = 0; i < n; i++) cin >> id >> a[i];
    sort(a, a+n);
    int s=a[0]+a[1]+a[2];
    if(s < 150) cout << "Counseling Support Required\n";
    else cout << "Counseling Support Not Required\n" << a[0] << " " << a[1] << " " << a[2] << nl;
    
    return 0;
}