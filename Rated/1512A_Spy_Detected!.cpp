#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int freq[101] = {};

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        for (int i = 0; i < n; i++) {
            if (freq[a[i]] == 1) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}