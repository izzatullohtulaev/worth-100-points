#include <iostream>
using namespace std;
int main(){
    int key,brake,remote,temp,override,fuel;
    cin>>key>>brake>>remote>>temp>>override>>fuel;
    if(fuel>=10 && ((key&&brake) || (remote&&temp<5) || override))
        cout<<"ENGINE STARTS";
    else
        cout<<"ENGINE LOCKED";
    return 0;
}
