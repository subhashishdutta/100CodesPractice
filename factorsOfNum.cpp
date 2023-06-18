//factors appear in pair so we need to check only in sqrt(num)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    for(int i=1; i<sqrt(num); i++){
        if(num%i == 0){
            if(i == num/i){
                cout<<i<<endl;
            }
            else{
                cout<<i<<endl<<num/i<<endl;
            }
        }
    }

    return 0;
}