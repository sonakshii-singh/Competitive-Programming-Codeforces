
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int ans = 0;

        if (s[0] == '_') ans++;
        if (s.back() == '_') ans++;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == '_' && s[i - 1] == '_') {
                ans++;
            }
        }

        if (s == "^") ans = 1;

        cout << ans << '\n';
    }

    return 0;
}
