#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int digit = x % 10;
        int len = to_string(x).size();

        int ans = (digit - 1) * 10;

        for (int i = 1; i <= len; i++) {
            ans += i;
        }

        cout << ans << endl;
    }

    return 0;
}