#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        int count = 0;
        int num = 1;

        while (count < k) {
            if (num % 3 != 0 && num % 10 != 3) {
                count++;
            }

            num++;
        }

        cout << num - 1 << endl;
    }

    return 0;
}