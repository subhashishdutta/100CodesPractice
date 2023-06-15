#include<iostream>
using namespace std;

int sum(int n){

    if(n==0)
        return n;

    return n+sum(n-1);
}

int main(){
    int num;
    cin>>num;

    int ans = sum(num);

    cout<<ans;

    return 0;
}