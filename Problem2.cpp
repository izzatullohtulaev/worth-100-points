#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x1,x2,x3,mu,var;
    cin>>x1>>x2>>x3;
    mu=(x1+x2+x3)/3;
    var=(pow(x1-mu,2)+pow(x2-mu,2)+pow(x3-mu,2))/3;
    cout<<var;
    return 0;
}
