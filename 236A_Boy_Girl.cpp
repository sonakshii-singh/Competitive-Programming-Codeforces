#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> freq(26,0);
    for(auto x:s){
        freq[x-'a']++;
    }
    int cnt=0;
    for(auto x:freq){
        if(x!=0) cnt++;
    }
    if(cnt%2==1) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
    return 0;
}