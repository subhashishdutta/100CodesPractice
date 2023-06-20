#include<bits/stdc++.h>
using namespace std;

int hexToBin(string num){
    int len = num.size();
    int ans = 0, count = 0;

    for(int i=len-1; i>=0; i--){
        if(num[i] >= '0' && num[i] <= '9'){
            int digit = int(num[i])-48;
            ans += digit*pow(16,count);
            count++;
        }
        else{
            int digit = int(num[i])-55;
            ans += digit*pow(16,count);
            count++;
        }
    }

    return ans;
}

int main(){
    string num;
    cin>>num;

    int ans = hexToBin(num);
    cout<<ans;

    return 0;
}