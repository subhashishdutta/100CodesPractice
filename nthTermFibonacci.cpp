#include<bits/stdc++.h>
using namespace std;

int fib(int num){

    if(num<=1){
        return num;
    }

    return fib(num-1)+fib(num-2);
}

int main(){
    int num, ans;
    cin>>num;

    ans = fib(num);
    cout<<ans;

    return 0;
}