#include <iostream>
using namespace std;
int main(){
    double gpa;
    int absences,projects;
    cin>>gpa>>absences>>projects;
    double attendance=(14-absences)/14.0*100;
    if((gpa>=3.5 && attendance>=90 && projects>=3) ||
       (gpa>=3.7 && attendance>=80 && projects>=2) ||
       (gpa>=4.0 && attendance>=70 && projects>=1))
        cout<<"Eligible";
    else
        cout<<"Not eligible";
    return 0;
}
