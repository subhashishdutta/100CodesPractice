//sum of proper divisors > num
#include<bits/stdc++.h>
using namespace std;

int sumOfDiv(int num){
    int sum = 0;
    
    for(int i=1; i<sqrt(num); i++){
        if(num%i == 0){
            if(i == 1){
                sum += 1;
            }
            else if(i == num/i){
                sum += i;
            }
            else{
                sum += i + (num/i);
            }
        }
    }

    return sum;
}

int main(){
    int num, sum;
    cin>>num;

    sum = sumOfDiv(num);

    if(sum > num){
        cout<<"abundant number";
    }
    else{
        cout<<"Not abundant number";
    }

    return 0;
}