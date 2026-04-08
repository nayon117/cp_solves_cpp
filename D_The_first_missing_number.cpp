#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

void solve () {
   int n, m; cin >> n >> m;
   unordered_set<int> s;
   for (int i = 0; i < n; i++) {
        int x; cin >> x;
        s.insert(x);
   }  
   for(int i = -m; i <= m; i++) {
        if(!s.count(i)) { 
            cout << i; return; 
        }
   }
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
