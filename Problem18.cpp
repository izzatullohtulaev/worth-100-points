#include <iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(c>='A' && c<='Z') cout<<"Uppercase alphabet";
    else if(c>='a' && c<='z') cout<<"Lowercase alphabet";
    else cout<<"It is not an alphabet";
    return 0;
}
