
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;

        long long capacity = min(x, y);

        cout << (n + capacity - 1) / capacity << endl;
    }

    return 0;
}
