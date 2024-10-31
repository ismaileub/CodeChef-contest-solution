#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n], b[n], totalCost=0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
         int cost = min(a[i], b[i]);
         totalCost+=cost;
    }

cout<<totalCost<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;  // Number of test cases
    while (T--) {
        solve();
    }

    return 0;
}

