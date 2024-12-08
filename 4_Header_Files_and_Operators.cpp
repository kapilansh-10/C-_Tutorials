#include<iostream>
using namespace std;

// There are two types of Header Files:
// 1. System Header Files: It comes with the compiler
// 2. User Defined Header Files: It is written by the programmer
// #include "this.h" => This will produce error if this.h is not present in the current directory

// int main(){
//     cout<<"This is Hello World Program";

//     return 0;
// }

/*               Operators            */

int main(){
    int a=4,b=5; 
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    // Arithmetic Operators
    cout<<"a = "<< a <<" "<<" b = "<< b <<endl;;
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a ++ is "<<a++<<endl;
    cout<<"The value of a -- b is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    /* Assignment Operators --> used to assign values to variables */
    // int a = 3, b = 9;
    // char d = 'd';

    /* Comparison operator */

    cout<<"Following are the comparison operators"<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<endl;

    /* Logical Operator */
    cout<<"Following are logical operators in C++"<<endl;
    cout<<"The value of this logical AND operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical OR operator  ((a==b) && (a<b)) is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical NOT operator (!(a==b)) "<<(!(a==b))<<endl;

    return 0;
}