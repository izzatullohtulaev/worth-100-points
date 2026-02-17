#include <iostream>
using namespace std;
int main(){
    double g;
    cin>>g;
    int k=g;
    switch(k){
        case 4: cout<<"You got 80% scholarship"; break;
        case 3:
            if(g>=3.5) cout<<"You got 60% scholarship";
            else if(g>=3.0) cout<<"You got 50% scholarship";
            else cout<<"No scholarship";
            break;
        default: cout<<"No scholarship";
    }
    return 0;
}
