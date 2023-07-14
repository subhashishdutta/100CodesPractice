#include<bits/stdc++.h>
using namespace std;

bool isAlphabet(char ch){
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    char c;
    cin>>c;

    if(isAlphabet(c)){
        cout<<c<<" is an alphabet. ";
    }
    else{
        cout<<c<<" is not an alphabet";
    }

    return 0;
}