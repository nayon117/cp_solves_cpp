#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

void solve () {
   int n, q; cin >> n >> q;  
   unordered_map<int,int> mp;

   while(q--) {
    int z, x; cin >> z >> x;
    if(z == 1) mp[x]++;   
    if(z == 2) cout << mp[x] << '\n';  
   }

}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
