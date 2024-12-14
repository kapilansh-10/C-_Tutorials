#include<iostream>
using namespace std;

//! Recursion: A function calling itself is called recursion.
//! Base condition: A condition which stops the recursion is called base condition.



int factorial(int n){
    if(n<=1){
        return 1;
    }
    else
    return n*factorial(n-1);
}

//! Fibonacci series means the sum of the previous two numbers is the next number.
//! 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377

int fib(int m){
    if(m<=1){
        return 1;
    }
    else{
        return fib(m-2)+fib(m-1); //* fib(5) = fib(3)+fib(4) = fib(1)+fib(2)+fib(2)+fib(3) = 1+1+1+2 = 5
    }
}


int main(){
    // Factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1
    // 1! = 1
    // n! = n*(n-1)
    //? Factorial of a number using recursion:
    // int n;
    // cin>>n;
    // cout<<factorial(n)<<endl;
    //? Fibonacci series using recursion: 
    int m;
    cin>>m;
    cout<<fib(m)<<endl;


    return 0;
}