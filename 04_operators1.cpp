#include<iostream>
using namespace std;

int main() {

    int num1 = 25;
    int num2 = 5;

    cout<<num1 + num2<<endl; // 30
    cout<<num1 - num2<<endl; // 20
    cout<<num1 * num2<<endl; // 125
    cout<<num1 / num2<<endl; // 5
    cout<<num1 % num2<<endl; // 0

    cout<<(num1==num2)<<endl; // false
    cout<<(num1!=num2)<<endl; // true
    cout<<(num1>=num2)<<endl; // true

    num1+=3;
    cout<<num1<<endl;
    num2-=2;
    cout<<num2<<endl;

    return 0;
}