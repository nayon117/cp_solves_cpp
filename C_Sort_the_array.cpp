#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

void solve () {
   int n; cin >> n;
   vi v(n);
   for (auto &i : v) cin >> i;
   sort(v.begin(), v.end());
   for (auto &val : v) cout << val << " ";  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
