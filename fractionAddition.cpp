#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    return b==0?a:gcd(b, a%b);
}

int main(){
    int num1, num2, denom1, denom2, dlcm;
    cin>>num1;
    cin>>denom1;
    cin>>num2;
    cin>>denom2;

    dlcm = (denom1*denom2)/gcd(denom1, denom2);

    int nNum = (dlcm/denom1)*num1+(dlcm/denom2)*num2;
    int ngcd = gcd(nNum, dlcm);

    cout<<"the new fraction is : "<<nNum/ngcd<<"/"<<dlcm/ngcd<<endl;

    return 0;

}