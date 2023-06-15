#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,largest;

    cin>>a;
    cin>>b;
    cin>>c;

    largest = max(a, max(b,c));

    cout<<largest<<endl;

    return 0;
}