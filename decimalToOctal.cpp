#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, temp;
    cin>>num;
    
    vector<int>v;

    while(num>0){
        temp = num%8;
        num /= 8;
        v.push_back(temp);
    }

    reverse(v.begin(), v.end());

    for(int i:v){
        cout<<i;
    }

    return 0;
}