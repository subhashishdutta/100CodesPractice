#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, temp, numlen, divisor, sqnum, pasqnum;
    cin>>num;
    temp = num;
    numlen = 0;

    while(temp != 0){
        temp = temp/10;
        numlen++;
    }

    divisor = pow(10, numlen);
    sqnum = ceil(pow(num,2));//pow gives ans in decimal and truncates decimal part when converting to int

    pasqnum = sqnum%divisor;

    // cout<<divisor<<endl;
    // cout<<sqnum<<endl;
    // cout<<pasqnum<<endl;

    if(num == pasqnum){
        cout<<"Automorphic number";
    }
    else{
        cout<<"Not automorphic number";
    }

    return 0;
    

}