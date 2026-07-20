#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int avTime = 240 - k;
    int time = 0;
    int ind = 0;

    for (int i = 1; i <= n; i++) {
        time += 5 * i;

        if (time <= avTime)
            ind = i;
        else
            break;
    }

    cout << ind << endl;
}