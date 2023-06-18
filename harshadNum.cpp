//number divisible by sum of it's digits
#include<bits/stdc++.h>
using namespace std;

bool harshad(int num){
    int sum, temp;
    temp = num;
    sum = 0;

    while(temp!=0){
        sum += temp%10;
        temp = temp/10;
    }

    if(num%sum == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num;
    cin>>num;

    if(harshad(num)){
        cout<<num<<" is a harshad number";
    }
    else{
        cout<<num<<" is not a harshad number";
    }

    return 0;
}