// (Sum of divisors of num1)/num1= (Sum of divisors of num2)/num2
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
                sum += i+(num/i);
            }
        }
    }
    return sum;
}

int main(){
    double num1, num2, sumn1, sumn2, a1, a2;
    cin>>num1;
    cin>>num2;

    sumn1 = sumOfDiv(num1);
    sumn2 = sumOfDiv(num2);

    a1 = sumn1/num1;
    a2 = sumn2/num2;

    // cout<<sumn1<<endl;
    // cout<<sumn2<<endl;
    // cout<<a1<<endl;
    // cout<<a2<<endl;

    if(a1 == a2){
        cout<<"friendly pair";
    }
    else{
        cout<<"Not friendly pair";
    }

    return 0;
}

