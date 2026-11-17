
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        bool found = false;

        for (int i = 1; i < s.size(); i++) {
            string x = s.substr(0, i);
            string y = s.substr(i);

            if (y[0] == '0') continue;

            int a = stoi(x);
            int b = stoi(y);

            if (b > a) {
                cout << a << " " << b << "\n";
                found = true;
                break;
            }
        }

        if (!found) cout << -1 << "\n";
    }

    return 0;
}
