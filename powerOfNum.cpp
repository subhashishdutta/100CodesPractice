#include<bits/stdc++.h>
using namespace std;

int main(){
    double base, exponent, ans;

    cin>>base;
    cin>>exponent;
    ans = 1;

    while(exponent>0){
        ans *= base;
        exponent--;
    }

    cout<<ans;

    return 0;

}