#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string a;
    cin >> n >> a;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == a[0])
            ans = max(ans, i + 1);
        if (a[i] == a[n - 1])
            ans = max(ans, n - i);
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

