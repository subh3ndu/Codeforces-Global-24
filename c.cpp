#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// C. Doremy's City Construction

void solve() {
    ll n;
    cin >> n;
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    if(a[1] == a[n]) {
        cout << n / 2 << "\n";
        return ;
    }

    ll ans = 0;
    for(ll l = 1, r = 1; l <= n; l = r = r + 1) {
        while(r+1 <= n and a[r+1] == a[l]) {
            r++;
        }
        ans = max(ans, (n - r) * r);
    }
    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}
