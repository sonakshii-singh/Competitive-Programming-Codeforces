#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int r = 0, b = 0, y = 0, g = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '!')
            continue;
        if (i + 3 < s.size() && s[i + 3] != '!') {
            char c = s[i + 3];

            if (c == 'R') r++;
            else if (c == 'B') b++;
            else if (c == 'Y') y++;
            else if (c == 'G') g++;
        }
        else if (i >= 3 && s[i - 3] != '!') {
            char c = s[i - 3];

            if (c == 'R') r++;
            else if (c == 'B') b++;
            else if (c == 'Y') y++;
            else if (c == 'G') g++;
        }
    }
  cout << r << " " << b << " " << y << " " << g << endl;

    return 0;
}