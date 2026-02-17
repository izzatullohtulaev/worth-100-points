#include <iostream>
using namespace std;
int main(){
    double w;
    cin>>w;
    if(w<=0){ cout<<"Invalid input."; return 0; }
    if(w>20){ cout<<"The package cannot be shipped."; return 0; }
    int k=w==1?1:(w<=3?3:(w<=10?10:20));
    switch(k){
        case 1: cout<<3500; break;
        case 3: cout<<5500; break;
        case 10: cout<<8500; break;
        case 20: cout<<10500; break;
    }
    return 0;
}
