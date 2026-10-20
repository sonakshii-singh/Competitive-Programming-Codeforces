
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int ans = 0;

        int x = a1 + a2;
        int y = a4 - a2;
        int z = a5 - a4;

        for (int a3 : {x, y, z}) {
            int cnt = 0;

            if (a3 == a1 + a2) cnt++;
            if (a4 == a2 + a3) cnt++;
            if (a5 == a3 + a4) cnt++;

            ans = max(ans, cnt);
        }

        cout << ans << '\n';
    }

    return 0;
}
