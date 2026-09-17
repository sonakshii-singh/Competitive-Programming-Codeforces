#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int lemons = a;
    int apples = b / 2;
    int pears = c / 4;

    int x = min({lemons, apples, pears});

    cout << x * 7 << endl;

    return 0;
}