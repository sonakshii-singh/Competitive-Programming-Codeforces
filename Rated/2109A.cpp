
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool liar = false;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == 0 && a[i + 1] == 0) {
                liar = true;
                break;
            }
        }

        if (count(a.begin(), a.end(), 1) == n) {
            liar = true;
        }

        cout << (liar ? "YES" : "NO") << '\n';
    }

    return 0;
}
