#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool seen[26] = {};
        bool ok = true;

        for (int i = 1; i < n; i++) {
            if (s[i] != s[i - 1]) {
                seen[s[i - 1] - 'A'] = true;
            }

            if (seen[s[i] - 'A']) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
}