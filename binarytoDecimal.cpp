#include<bits/stdc++.h>
using namespace std;

int main(){
    int bin,dec,temp, count;
    cin>>bin;
    temp = bin;
    dec = 0;
    count = 0;

    while(temp!=0){
        dec += (pow(2,count))*(temp%10);
        temp = temp/10;
        count++;
    }

    cout<<dec;

    return 0;
}