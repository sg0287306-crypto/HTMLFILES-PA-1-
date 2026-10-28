#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int m;
    cin>>m;
    (m%100==0)?((m%400==0)?cout<<"leap year":cout<<"not a leap year"):((m%4==0)?cout<<"leap year":cout<<"not a leap year");

return 0;
}