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
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n, greater<int>());
    cout << "Shortlisted Candidates :\n";
    for(int i = 0; i < 3; i++) cout << a[i] << " ";
    return 0;
}