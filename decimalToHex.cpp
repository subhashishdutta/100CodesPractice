#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int count = 0;

    vector<char> v;

    while(num>0){
        int rem = num%16;
        if(rem < 10){
            int digit = rem+48;
            v.push_back(digit);
            count++;
        }
        else{
            int digit = rem+55;
            v.push_back(digit);
            count++;
        }
        num /= 16;

    }

    reverse(v.begin(), v.end());

    for( char i:v){
        cout<<i;
    }

    return 0;
}