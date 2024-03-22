// Longest Increasing Sequence, O(n logn)

#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <string>
#include <numeric>
#define ll long long
#define nl endl
using namespace std;

int lis(vector < int > & nums) {
  vector < int > sub;
  for (int x: nums) {
    if (sub.empty() || sub.back() < x) sub.push_back(x);  
    else *lower_bound(sub.begin(), sub.end(), x) = x;
  }
  return sub.size();
}
int main() {
	long int n;
    cin >> n;
    vector<int> arr(n);
    for(int& x : arr) cin >> x;
    cout << lis(arr) << nl;
	return 0;
}
