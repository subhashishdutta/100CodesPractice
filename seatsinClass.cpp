//Which n people can occupy r seats in a classroom
#include<bits/stdc++.h>
using namespace std;

int fact(int num){

    int fact=1;
    for(int i=num; i>=1 ;i--)
        fact*=i;
    return fact;
}

int main(){
    int n,r,ans;
    cin>>n;
    cin>>r;

    ans = fact(n)/fact(n-r);

    cout<<ans;

    return 0;
}