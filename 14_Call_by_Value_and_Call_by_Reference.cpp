#include<iostream>
using namespace std;


//! Call by Value: In this method, the value of the actual parameter is copied to the formal parameter. 
//! So, the changes made to the formal parameter will not affect the actual parameter.
//! In Call by Value, the actual parameter is not modified.
//! In Call by Value, the changes made to the formal parameter will not affect the actual parameter.


// int sum(int a, int b){ //* Here a and b are formal parameters
//     int c = a+b;
//     return c;

// }

//! This will not swap the actual values of a and b because the values of a and b are copied to the formal parameters.
//! So, the changes made to the formal parameters will not affect the actual parameters.


// void swap(int a, int b){ //* Here a and b are formal parameters
//     int temp = a; //* temp = 10
//     a = b; //* a = 20
//     b = temp; //* b = 10

// }


//! Call by Reference: In this method the address of the actual parameter passed to the formal parameter. 
//! So, the changes made to the formal parameter will affect the actual parameter.
//! In Call by Reference, the actual paramter is modified.
//! In Call by Reference, the changes made to the formal parameter will affect the actual parameter.

// void swapPointer(int *a, int *b){ //* Here a and b are formal parameters
//     int temp = *a; //* temp = 10
//     *a = *b; //* a = 20
//     *b = temp; //* b = 10

// }

//! Call by Reference using C++ reference variables
// void swapPointer(int &a, int &b){ //* Here a and b are formal parameters
//     int temp = a; //* temp = 10
//     a = b; //* a = 20
//     b = temp; //* b = 10

// }

void swapReferenceVar(int &a, int &b){ //* Here a and b are formal parameters
    int temp = a ; // Declare a temporary variable and assign it the value  of 'a'
    a  = b; // Assign the value of 'b' to 'a'
    b = temp; // Assign the value of 'temp' (original value of 'a') to 'b'
}


int main(){
    int a = 10, b = 20; //* Here a and b are actual parameters
    // cout<<"The sum of 10 and 20 is: "<<sum(10,20)<<endl;
    cout<<"The value of a is: "<<a<<" and the value of b is: "<<b<<endl;
    
    // swap(a,b); //* This will not swap the actual values of a and b because the values of a and b are copied to the formal parameters.

    // swapPointer(&a, &b); //* This will swap the actual values of a and b because the address of a and b are passed to the formal parameters.
    //* In simple words, the address of a and b are passed to the formal parameters and the formal parameters are used to change the values of a and b.
    // cout<<"The value of a is: "<<a<<" and the value of b is: "<<b<<endl;

    swapReferenceVar(a, b); //* This will swap the actual values of a and b because the address of a and b are passed to the formal parameters.
     cout<<"The value of a is: "<<a<<" and the value of b is: "<<b<<endl;
        

    return 0;
}