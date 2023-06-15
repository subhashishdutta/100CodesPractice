#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){

    if(num<2){
        return false;
    }
    else{
        for(int i=2; i<sqrt(num); i++){
        if(num%i == 0){
            return false;
        }
        else{
            return true;
        }
    }
    }
}

int main(){
    int num;
    cin>>num;

    for(int i=2; i<num; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }

    return 0;
}