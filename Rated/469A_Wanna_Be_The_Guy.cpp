#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> level(n + 1, false);

    int p;
    cin >> p;
    while (p--) {
        int x;
        cin >> x;
        level[x] = true;
    }

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        level[x] = true;
    }

    for (int i = 1; i <= n; i++) {
        if (!level[i]) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy!";
    return 0;
}