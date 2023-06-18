#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, sum;
    cin>>num;
    sum = 0;

    for(int i=1; i<sqrt(num); i++){

        if(num%i == 0){
            if(i == 1){
                sum += i;
            }
            else if(i == num/i){
                // cout<<i<<endl;
                sum += i;
            }
            else{
                // cout<<i<<endl;
                // cout<<num/i<<endl;
                sum += i+(num/i);
            }
        }
    }

    if(sum == num){
        cout<<"Perfect number";
    }
    else{
        cout<<"not perfect number";
    }

    return 0;
}