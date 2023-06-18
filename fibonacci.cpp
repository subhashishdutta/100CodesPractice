#include<bits/stdc++.h>
using namespace std;

int fib(int num){

    if(num <=1){
        return num;
    }

    return fib(num-1)+fib(num-2);
}

int main(){
    int num;
    cin>>num;
    
    for(int i=0; i<num; i++){
        cout<<fib(i)<<endl;
    }

    return 0;
}