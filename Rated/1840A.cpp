#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s, a;
        cin >> n >> s;
        for (int i = 0; i < n; ) {
            char c = s[i];
            int j = i + 1;
            while (s[j] != c) j++;
            a += c;
            i = j + 1;
        }
        cout << a << "\n";
    }
}