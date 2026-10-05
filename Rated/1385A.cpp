#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        if (x == max(y, z)) {
            cout << "YES\n";
            cout << x << " " << min(y, z) << " " << min(y, z) << endl;
        }
        else if (y == max(x, z)) {
            cout << "YES\n";
            cout << min(x, z) << " " << y << " " << min(x, z) << endl;
        }
        else if (z == max(x, y)) {
            cout << "YES\n";
            cout << min(x, y) << " " << min(x, y) << " " << z << endl;
        }
        else {
            cout << "NO"<<endl;
        }
    }

    return 0;
}