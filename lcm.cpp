#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return b==0?a:gcd(b, a%b);
}

int main(){
    int a,b,hcf,lcm;
    cin>>a;
    cin>>b;

    hcf = gcd(a,b);
    lcm = (a*b)/hcf;
    cout<<lcm;

    return 0;
}