#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

void solve () {
   int n, k; cin >> n >> k;
   vi v(n);
   set<int> s;
   
   for (int i = 0; i < n; i++) cin >> v[i];
   sort(v.begin(), v.end());

   int m = n - k;
   int pos = (m - 1) / 2;

   for (int i = 0; i <= n - m; i++) {
        int med = v[i + pos];
        s.insert(med);
   }

   for (auto &val : s) cout << val << " ";
   cout << "\n";

}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
