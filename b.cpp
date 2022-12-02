#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// B. Doremy's Perfect Math Class

ll gcd(ll a, ll b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}

void solve() {
    int n;
    cin >> n;
    int res = 0;
    vector<int> a(n + 1);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        res = gcd(res, a[i]);
    }

    cout << a[n - 1] / res << "\n";
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
