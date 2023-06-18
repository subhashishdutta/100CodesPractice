#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, temp, ans, count,n;
    cin>>num;
    temp = num;
    ans = 0;
    count = 0;
    

    while(temp!=0){
        temp = temp/10;
        count++;
    }

    temp = num;

    while(temp!=0){
        n = temp%10;
        ans = ans + pow(n, count);
        temp = temp/10;
    }

    if(ans == num){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }

    return 0;
}