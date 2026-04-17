#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

void solve () {
   int n , q; cin >> n >> q;
   string s; cin >> s;

   while(q--) {
    string a; int x;
    cin >> a >> x;

    if(a == "prev_permutation") {
       while(x--) prev_permutation(s.begin(), s.end());
    }
    else {
        while(x--) next_permutation(s.begin(),s.end());
    }

    cout << s << '\n';
   }  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
