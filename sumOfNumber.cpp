#include<bits/stdc++.h>
using namespace std;

int getsum(int num, int sum){

    if(num == 0){
        return sum;
    }

    sum += num%10;

    return getsum(num/10, sum);
}

int main(){
    int num, sum, ans;
    cin>>num;
    sum = 0;
    ans = 0;

    ans = getsum(num, sum);
    cout<<ans;

    return 0;
}