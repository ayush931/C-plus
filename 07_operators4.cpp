#include<iostream>
using namespace std;

int main() {

    int a=4;
    cout<<sizeof(a)<<endl; // 4

    char name='a';
    cout<<sizeof(name)<<endl; // 1

    bool flag;
    a==name? flag=true:flag=false;
    cout<<flag<<endl; // 0

    return 0;
}

//! Misc Operator

/*
* Sizeof operator
* condition? Expression1 (if condition is true) : Expression2 (if condition is false)
* Comma operator:- int y = 4, 3, 6; then y = 6.
* Dot and arrow operator:- dot operator is used for classes and arrow operator is used for pointers.
* Casting operator:- float b = 3.44; int(b) = 3
* & Address operator:- 
* * Pointer operator
*/