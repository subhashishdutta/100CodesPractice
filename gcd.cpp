#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return b==0?a:gcd(b, a%b);
}

int main(){
    int a,b, ans;
    cin>>a;
    cin>>b;

    ans = gcd(a,b);
    cout<<ans;

    return 0;
}