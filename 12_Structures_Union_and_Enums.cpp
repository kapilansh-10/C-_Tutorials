#include<iostream>
using namespace std;

//! Structures in C++ are user defined data types that allow us to group different types of data together.
//? Structures are used to represent a record. Suppose you want to store some information about a person: his/her name, citizenship number and salary. You can easily do this using structures.

typedef struct employee //* employee is a structure
//? here typedef is used to give a new name to the structure employee
{
    /* data */
    int eId; //* eId is a member of the structure employee
    char favChar; //* favChar is a member of the structure employee
    float salary; //* salary is a member of the structure employee
}ep; //? ep is a new name for the structure employee

//! Union in C++ is a user defined data type that allows us to store different data types in the same memory location.
//? The memory occupied by a union will be large enough to hold the largest member of the union.

union money
{
    int rice; //* rice is a member of the union money
    char car;
    float pounds;


}; //* money is a union

//! Enums are user defined data types in C++ that are used to assign names to integral constants, the names make a program easy to read and maintain.
//? The keyword 'enum' is used to declare an enumeration in C++ and the syntax is: enum enum_name {const1, const2, ..., constN};
//? By default, the value of the first constant is 0, the value of the second constant is 1, and so on. You can change the default value of the constants by assigning a value to the first constant. 
//? The value of the next constant is one more than the value of the previous constant.


int main(){

    // ep kapilansh; //* kapilansh is a variable of the structure employee
    // ep dewansh;
    // ep kira;
    // kapilansh.eId = 1;
    // kapilansh.favChar = 'k';
    // kapilansh.salary = 200000;
    // cout<<"The value is "<<kapilansh.eId<<endl;
    // cout<<"The value is "<<kapilansh.favChar<<endl;
    // cout<<"The value is "<<kapilansh.salary<<endl;

    // union money m1; //* m1 is a variable of the union money
    // m1.rice = 34; //* rice is assigned a value of 34
    // cout<<m1.rice<<endl; //* prints the value of rice i.e. 34 
    // m1.car = 'c'; //* car is assigned a value of 'c'
    // cout<<m1.car<<endl; //* prints the value of rice i.e. 99 as the value of car is assigned to rice and the value of rice is overwritten by the value of car 

    enum Meal {breakfast, lunch, dinner}; //* Meal is an enumeration
    //? here breakfast is 0, lunch is 1 and dinner is 2
    // cout<<breakfast<<endl; //* prints 0
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    // Meal m1 = breakfast; //* m1 is a variable of the enumeration Meal
    // cout<<m1<<endl;  //* prints 0
    // Meal m1 = lunch; //* m1 is a variable of the enumeration Meal
    // cout<<m1<<endl; //* prints 1
    // Meal m1 = dinner; //* m1 is a variable of the enumeration Meal
    // cout<<m1<<endl; //* prints 2
    
    return 0;
}