#include <iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    switch(c){
        case 'u': cout<<"Salom"; break;
        case 'e': cout<<"Hello"; break;
        case 'r': cout<<"Privet"; break;
        case 'g': cout<<"Hallo"; break;
        default: cout<<"I do not know this language:(";
    }
    return 0;
}
