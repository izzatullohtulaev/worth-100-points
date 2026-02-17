#include <iostream>
using namespace std;
string day(int d){
    string arr[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    return arr[d];
}
int main(){
    int today,after;
    cin>>today>>after;
    int future=(today+after)%7;
    cout<<"Today is "<<day(today)<<" and the future day is "<<day(future);
    return 0;
}
