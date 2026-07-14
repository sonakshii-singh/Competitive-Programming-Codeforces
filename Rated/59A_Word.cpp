#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int upper=0, lower=0;
    for(auto c:s){
        if(isupper(c)) upper++;
        else lower++;
    }
    if(upper>lower){
        for(auto &c:s){
            c=toupper(c);
        }
    }
    else{
        for(auto &c:s){
            c=tolower(c);
        }
    }
    cout<<s<<endl;
}