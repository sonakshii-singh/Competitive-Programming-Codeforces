#include<bits/stdc++.h>
using namespace std;
int main(){
    int k, r;
    cin>>k>>r;
    if(k%10==0){
        cout<<1<<endl;
        return 0;
    }
    int i=1;
    while(true){
       int mult=i*k;
       int res=mult%10;
       if(res==r || res==0){
        cout<<i<<endl;
        break;
       }
       i++;
    }
  return 0;
}