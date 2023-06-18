#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    if(num == 0){
        return 0;
    }
    
    if(num == 1){
        return 1;
    }

    return num * fact(num-1);
}

int main(){
    int num, ans;
    cin>>num;

    ans = fact(num);
    cout<<ans;

    return 0;
}