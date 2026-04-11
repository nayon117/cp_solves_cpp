#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

void solve () {
   int n, m, a, b , c;
   cin >> n >> m >> a >> b >> c;
   int cb = min(n, m);
   int cost = cb * c + ((n - cb) * a) + ((m - cb) * b); 
   cout << cost << '\n';
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t; cin >> t;
    while(t--) solve ();
    return 0;
}
