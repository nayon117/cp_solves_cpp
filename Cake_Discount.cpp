#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

void solve () {
   int n; cin >> n;
   if(n < 5) cout << n * 100 << '\n';
   else cout << n * 85 << '\n';  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
