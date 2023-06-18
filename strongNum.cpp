#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    if(num == 0){
        return 0;
    }
    
    if(num == 1){
        return 1;
    }

    return num*fact(num-1);
}

int main(){
    int num, ans, temp;
    cin>>num;
    ans = 0;
    temp = num;

    while(temp!=0){
        ans += fact(temp%10);
        temp = temp/10;
    }

    if(num == ans){
        cout<<"Strong number"<<endl;
    }
    else{
        cout<<"Not Strong number"<<endl;
    }
}