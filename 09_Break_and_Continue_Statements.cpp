#include<iostream>
using namespace std;

int main(){

    //! Break Statement : It is used to terminate the loop. It is used to break the loop when certain condition is met.
    //? Syntax : break; 
    //? It is used in loops like for, while, do-while.


    int i;
    for(i=0;i<10;i++){
        cout<<i<<endl;
        if(i==5){ //* when i becomes 5, loop will break.
            break; //* loop will break
        }
    }

    //! Continue Statement : It is used to skip the current iteration of the loop and continue with the next iteration.
    //? Syntax : continue;
    //? It is used in loops like for, while, do-while.
    

    cout<< "Continue Statement"<<endl;

    // int i;
    for(i=0;i<10;i++){
        if(i==5){ //* when i becomes 5, loop will skip the current iteration and continue with the next iteration.
            continue;; //* loop will skip the current iteration and continue with the current iteration.
        }
        cout<<i<<endl;
    }
     
     

    return 0;
}