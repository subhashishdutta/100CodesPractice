#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, temp, count;
    cin>>num;

    temp = 0;
    count = 0;
    while(num>0){
        int a = num%10;
        
        if(a==0){
            temp += ceil(pow(10, count))*1;
        }
        else{
            temp += ceil(pow(10, count))*a;
        }
        num = num/10;
        count++;
    }

    cout<<temp;

    return 0;
}