#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin>>s;
        int len=s.size();
        if(len<=10){
            cout<<s<<endl;
            continue;
        }
        int mid=len-2;
      cout << s.front() << len - 2 << s.back() << endl;
    }
}
       
        