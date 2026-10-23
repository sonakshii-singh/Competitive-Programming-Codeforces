
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int screens = (y + 1) / 2;

        int remaining = 15 * screens - 4 * y;

        x -= min(x, remaining);

        screens += (max(0, x) + 14) / 15;

        cout << screens << '\n';
    }

    return 0;
}
