// how to number  the employee salary and department in double value
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1;
   double num2;
    char c;
    cin>>num1;
    cin>>num2;
    cin>>c;
    cout<<"Employee ID: "<<num1<<endl;
    cout<<"Salary: " <<fixed<<setprecision(2)<<num2<<endl;
    cout<<"Department code: "<<c<<endl;
    return 0;
}
