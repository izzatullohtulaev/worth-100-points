#include <iostream>
using namespace std;
int main(){
    double s1,s2,s3,payment;
    int years,balance;
    cin>>s1>>s2>>s3>>payment>>years>>balance;
    double avg=(s1+s2+s3)/3;
    if(avg>=100 && (payment>=50 || years>=3) && balance==0)
        cout<<"UPGRADE";
    else
        cout<<"NO UPGRADE";
    return 0;
}
