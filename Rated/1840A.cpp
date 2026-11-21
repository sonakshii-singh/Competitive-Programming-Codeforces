
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        string ans = "";

        for (int i = 0; i < n; i++) {
            ans += s[i];

            char ch = s[i];
            while (s[i] != ch || i == (int)ans.size()) {
                i++;
            }
            i++;
        }

        cout << ans << endl;
    }

    return 0;
}
