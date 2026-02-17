#include <iostream>
using namespace std;
int main(){
    double w1,p1,w2,p2;
    cin>>w1>>p1>>w2>>p2;
    double r1=p1/w1;
    double r2=p2/w2;
    if(r1<r2) cout<<"Package 1 has a better price";
    else if(r2<r1) cout<<"Package 2 has a better price";
    else cout<<"Two packages have the same price.";
    return 0;
}
