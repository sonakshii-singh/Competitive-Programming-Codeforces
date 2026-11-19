
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    set<int> s;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }

    if(s.size() < n)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
