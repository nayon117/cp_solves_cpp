#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;

void solve () {
   int n; cin >> n;
   vi v(n + 1), ng(n + 1);
   for (int i = 1; i <= n; i++) cin >> v[i];

   stack<int> st;
   for(int i = n; i >= 1; i--) {
     while(!st.empty() && v[st.top()] <= v[i]) st.pop();
     if(st.empty()) ng[i] = -1 ;
     else ng[i] = st.top();
     st.push(i);
   }

   int q; cin >> q;
   while(q--) {
    int x; cin >> x;
    cout << ng[x] << '\n';
   }  
}

int main() {
    ios::sync_with_stdio(false);cin.tie(nullptr);
    solve ();
    return 0;
}
