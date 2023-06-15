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

    if(isPrime(num)){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }

    return 0;
}