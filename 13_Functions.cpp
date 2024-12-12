#include<iostream>
using namespace std;

//! Functions in C++ : Functions  are the building blocks of a C++ program. A large program is divided into basic building blocks called functions.
//! A function is a self-contained block of code that encapsulates a specific task or related group tasks.
//! A function is a block of code that performs a specific task. It has a name and it is reusable i.e it can be executed from as many different parts in a C++ program as required.
//? Syntax of a function:
// return type function_name(parameters){

// }

// int sum (int a, int b){ //* a and b are called formal parameters
//     int c = a+b; //* Here a and b will take the values of num1 and num2
//     return c; //* Here c will be returned to the main function
// }

// int main(){
//     int num1, num2; //* num1 and num2 are called actual parameters;
//     cout<<"Enter the value of num1: "<<endl; 
//     cin>>num1; 
//     cout<<"Enter the value of num2: "<<endl;
//     cin>>num2; 
//     cout<<"The sum is "<<sum(num1,num2)<<endl; //* Here num1 and num2 are passed to the function sum




//     return 0;
// }

//! ----------------->>>>>>>>>>>>> Function prototype <<<<<<<<<<<<-----------------
//! Function prototype: A function prototype is a declaration of a function that tell the program about the function name, return type and parameters.
//! It is used to tell the compiler about the function name, return type and parameters. It is used when the function is defined after the  main function.

//? Syntax of a function prototype:
// return type function_name(parameters); 

int sum(int a, int b); //* Function prototype is declared here
//! int sum(int a, b); //! This is not acceptable
//! int sum(int , int b) //! This is also acceptable

// void greet(); //! This is acceptable
// void greet(void); //! This is acceptable

int main(){
    int num1, num2; //* num1 and num2 are called actual parameters;
    cout<<"Enter the value of num1: "<<endl; 
    cin>>num1; 
    cout<<"Enter the value of num2: "<<endl;
    cin>>num2; 
    cout<<"The sum is "<<sum(num1,num2)<<endl; //* Here num1 and num2 are passed to the function sum
    greet();



    return 0;
}

int sum (int a, int b){ //* a and b are called formal parameters
    int c = a+b; //* Here a and b will take the values of num1 and num2
    return c;   //* Here c will be returned to the main function
}

void greet(){
    cout<<"Hello! Good Morning"<<endl;
}