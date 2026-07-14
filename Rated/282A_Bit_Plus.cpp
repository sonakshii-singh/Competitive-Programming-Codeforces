#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
    for(int i=0; i<n; i++){
        string ops;
        cin>>ops;
        if(ops[1]=='+') x++;
        else x--;
    }
    cout<<x<<endl;
}