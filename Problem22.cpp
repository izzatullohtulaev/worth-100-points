#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double x,y;
    cin>>x>>y;
    if(sqrt(x*x+y*y)<=10)
        cout<<"Point ("<<x<<","<<y<<") is in circle";
    else
        cout<<"Point ("<<x<<","<<y<<") is not in circle";
    return 0;
}
