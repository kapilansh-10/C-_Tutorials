#include<iostream>
using namespace std;

//! Inline Function : Inline function is a function that is expanded in line when it is called. 
//! When the inline function is called whole code of the inline function gets inserted or expanded at the point of inline function call.
//! This insertion of code is done by the copiler at compile time.
//! Inline function may increase efficiency if it is small.
//! In simple words, inline functions are used to reduce the function call overhead. i.e if a function is called multiple times, then it is better to make that function inline.


// int product(int a, int b){
//     return a*b;
// }

inline int product(int a, int b){
    //! Not recommended to use static variables in inline functions
    // int static c = 0; // This will be initialized only once
    // c = c+1; // Next time this function is run, the value of c will be retained
    return a*b; // 
}

//! Default Arguments: Default arguments are those arguments which are used in a function call if no argument is passed in the function call.
//! Default arguments are used when the function is called without passing the argument.

float moneyReceived(int currentMoney, float factor = 1.04){
    return currentMoney*factor;
}

//! Constant Arguments: Constant arguments are those arguments which are declared as constant in the function definition.
//! The value of constant arguments cannot be changed in the function definition.

int main(){
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;

    int money = 100000;
    cout<<"If you have "<<money<<"Rs in your bank account , then you will receive "<<moneyReceived(money)<<endl;
    cout<<"For VIP: If you have "<<money<<"Rs in your bank account, you will receive "<<moneyReceived(money,1.1)<<endl;



    return 0;
}