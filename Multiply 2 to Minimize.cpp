#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    multiset<long long> s;
    vector<int> results;

    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;

        // Check for duplicates in the multiset and double `x` until it's unique
        while (s.count(x)) {
            s.erase(s.find(x));
            x = 2 * x;
        }

        // Insert the unique `x` into the set and record the size of the set
        s.insert(x);
        results.push_back(s.size());
    }

    // Output the results for this test case
    for (int result : results) {
        cout << result << " ";
    }
    cout << "\n";
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

