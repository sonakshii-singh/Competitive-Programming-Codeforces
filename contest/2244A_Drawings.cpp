#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, cnt = 0;
        cin >> n;

        string s;
        cin >> s;

        int maxi = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '#') {
                cnt++;
                maxi = max(maxi, cnt);
            } else {
                cnt = 0;
            }
        }

        cout << (maxi + 1) / 2 << '\n';
    }
}