//total number of handshake   =   ( N – 1 + N – 2 +….+ 1 + 0 )   =   ( (N-1) * N ) / 2.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,ans;
    cin>>n;

    ans = (n*(n-1))/2;
    cout<<ans;

    return 0;
}