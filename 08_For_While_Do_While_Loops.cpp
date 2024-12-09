#include <iostream>
using namespace std;

int main(){

    //! For loop in C++ !//
    //! Syntx of for loop in C++ : for(initialization; condition; increment/decrement)
    // int i; //* Declaration of variable i
    // for( i=1; i>100; i++)
    // {
    //     cout<<i<<endl;
    // }


    //! While loop in C++ !//
    //! Syntax of while Loop in C++ :
    /* while(condition):
        {
            C++ statements;
        }
    */

//    int i = 0;
//    while (i<=40){
//     cout<<i<<endl;
//     i++;
//    }

    // infinite while loop

    // int i=1;
    // while(i>0){
    //     cout<<i<<endl;
    //     i++;
    // }

    // return 0;

    //! Do-While loop in C++ : !//
    //! Syntax of do-while Loop in C++ :
    /* do{
            C++ statements;
        }while(condition);
    */

//    int i; //* Declaration of variable i
//    do {
//     cout<<i<<endl;
//     i++;
//    }while(i<=100); 

//    return 0;

   // Difference between while and do-while loop
    // In while loop, condition is checked first, then the statements inside the loop are executed.
    // In do-while loop, the statements inside the loop are executed first, then the condition is checked.

    int i=1;
    while(i<=10){
        cout<<"6"<<" x "<< i <<" = "<<6*i<<endl;
        i++;
    }

    cout<<"-------------------"<<endl;

    int j;
    for(j=1;j<=10;j++){
        cout<<"6"<<" x "<< j <<" = "<<6*j<<endl;
    }

    cout<<"-------------------"<<endl;

    int k = 1;
    do{
        cout<<"6"<<" x "<< k <<" = " << 6*k <<endl;
        k++;
    } while(k<=10);

    return 0;
}