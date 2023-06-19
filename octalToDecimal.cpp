#include<bits/stdc++.h>
using namespace std;

int main(){
    int oct, dec, count;
    cin>>oct;
    dec = 0;
    count = 0;

    while(oct!=0){
        dec += pow(8,count)*(oct%10);
        oct = oct/10;
        count++;
    }

    cout<<dec;

    return 0;
}