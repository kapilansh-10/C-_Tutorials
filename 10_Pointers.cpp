#include<iostream>
using namespace std;

int main(){

    //! What is pointer? 
    //* A data type which holds the address of another data type is called pointer.
    
    int a = 10;
    int *b = &a; //* b is a pinter which holds the address of a.
    //* & is the address of operator and it is used to get the address of a variable in memory location of the computer system 
    // cout<<b<<endl;    //* It will print the address of a.
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of a is: "<<b<<endl;

    //* * is the dereference operator. It is used to get the value at the address stored in the pointer.

    cout<<"The value at the address b is: "<<*b<<endl;
    cout<<"The value at the address a is: "<<*a<<endl;

    return 0;
}