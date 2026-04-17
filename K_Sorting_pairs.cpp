#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

void solve () {
    int n; cin >> n;
    vector<pair<string,int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(),[](auto a, auto b) {
        if(a.second != b.second) return a.second > b.second;
        return a.first < b.first;
    });

    for(auto [x,y] : v) {
        cout << x <<  " " << y << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
