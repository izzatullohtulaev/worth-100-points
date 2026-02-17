#include <iostream>
using namespace std;
int main(){
    int h,m;
    cin>>h>>m;
    int mh=(m%10)*10+m/10;
    int mm=(h%10)*10+h/10;
    cout<<mh<<":"<<mm<<endl;
    if(mh<24 && mm<60) cout<<"Yes";
    else cout<<"No";
    return 0;
}
