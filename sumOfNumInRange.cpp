#include<iostream>
using namespace std;

int sumOfNum(int a, int b){

    if(a>b){
        return a;
    }

    return a+sumOfNum(a+1,b);
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;

    int n = sumOfNum(a,b);

    cout<<n<<endl;

    return 0;
}