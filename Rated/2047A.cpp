#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int sum = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            int a;
            scanf("%d", &a);
            sum += a;
            int s = (int)round(sqrt((double)sum));
            if (s * s == sum && s % 2 == 1) ans++;
        }
        printf("%d\n", ans);
    }
}