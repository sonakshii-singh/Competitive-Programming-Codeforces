#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    string s;
    cin >> s;

    int ans = 0;

    for (int i = n - x; i < n; i++) {
        if (i == n - y - 1) {
            // This position must be 1
            if (s[i] == '0')
                ans++;
        }
        else {
            // Every other position must be 0
            if (s[i] == '1')
                ans++;
        }
    }

    cout << ans << endl;

    return 0;
}