#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
    //Write your code here
    int basic,allow;
    // float hra,da,pf;
    char grade;
    cin>>basic;
    cin>>grade;
    cout<<basic<<endl;
    float hra = (0.2*basic);
    cout<<hra<<endl;
    float da = (0.5*basic);
    cout<<da<<endl;
    if(grade == 'A'){
        allow = 1700;
    }
    if(grade == 'B'){
        allow = 1500;
    }
    if(grade >= 'C'){
        allow = 1300;
    }
    cout<<allow<<endl;
    float pf = (0.11*basic);
    cout<<pf<<endl;
    float totalSalary = basic + hra + da + allow - pf;
    cout<<(totalSalary);
    return 0;
}