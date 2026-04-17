#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

void solve () {
   int n, q; cin >> n >> q;
   set<int> s;
   for (int i = 0; i < n; i++) {
    int x; cin >> x;
    s.insert(x);
   }  
   vi v(s.begin(), s.end());
   while(q--) {
    int x; cin >> x;
    int less = lower_bound(v.begin(), v.end(),x) - v.begin();
    int greater = v.end() - upper_bound(v.begin(), v.end(), x);
    cout << less << " " << greater << '\n';
   }
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
