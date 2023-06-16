#include<bits/stdc++.h>
using namespace std;

int doReverse(int num, int rev){
    if(num == 0){
        return rev;
    }

    rev = (rev*10)+(num%10);

    return doReverse(num/10, rev);
}

int main(){
    int num, rev, ans;
    cin>>num;
    rev = 0;

    ans = doReverse(num, rev);

    if(num == ans){
        cout<<"Palindrome";
    }
    else{
        cout<<"not palindrome";
    }

    return 0;
}