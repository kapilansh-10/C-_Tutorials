#include<iostream>
using namespace std;


//! Array : Array is a collection of similar data types stored in contiguoous memory locations.
//? syntax : data_type array_name[array_size];



int main(){


    // int marks[]={10,20,30,40}; //* Array Initialization
    // cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl; //* Array Access
    // cout<<marks[1]<<endl; 
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    
    int mathMarks[4];
    mathMarks[0]=100;
    mathMarks[1]=200;
    mathMarks[2]=300;
    mathMarks[3]=400;
    // cout<<"These are math Marks"<<endl;
    // cout<<mathMarks[0]<<endl;
    // cout<<mathMarks[1]<<endl; 
    // cout<<mathMarks[2]<<endl;
    // cout<<mathMarks[3]<<endl;

    //! You can change the value of an array
    // marks[1]=2000;
    // cout<<"The changed value of marks array"<<endl;
    // cout<<marks[1]<<endl;

    //! Accessing the array using loops

    // for (int i=0;i<4;i++){
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }

    //! Using while loop

    // int i=0;
    // while(i<4){
    //     cout<<"Tee value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
        //! Using do while loop
    
        // i=0;
        // do{
        //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        //     i++;
        // }
        // while(i<4);
    
        // //! Pointers and arrays
        // int marks[]={10,20,30,40};
    
        // int* p = marks;
        // cout<<*p<<endl;
    
    // }

    //! Using do while loop

    // i=0;
    // do{
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }
    // while(i<4);

    //! Pointers and arrays
    int marks[]={10,20,30,40};

    int* p = marks;
    // cout<<*p<<endl; //* p = &marks[0]
    // cout<<*(p++)<<endl; //* Post increment in pointers: p++ means p=p+1
    // cout<<*p<<endl;
    // cout<<*(++p)<<endl; //* Pre increment in pointers: ++p means p=p+1
    // cout<<*p<<endl;
    // cout<<*(++p)<<endl;

    //! Pre increment in pointers: ++p means p=p+1: It first increments the value of p and then returns the value of p.

    // cout<<*p<<endl;
    // cout<<*(++p)<<endl;
    // cout<<*(++p)<<endl;
    // cout<<*(++p)<<endl;

    // cout<<*p<<endl;
    // cout<<*(p+1)<<endl;
    // cout<<*(p+2)<<endl;
    // cout<<*(p+3)<<endl;

    //! Post increment in pointers: p++ means p=p+1 : It first returns the value of p and then increments the value of p.

    // cout<<*p<<endl;
    // cout<<*(p++)<<endl;
    // cout<<*p<<endl;
    // cout<<*(p++)<<endl;
    // cout<<*p<<endl;
    // cout<<*(++p)<<endl;


    // int* p = marks; //* p= &marks[0]
    // cout<<"The value of *p "<<" is "<<*p<<endl; 
    // cout<<"The value of *(p+1) "<<" is "<<*(p+1)<<endl; 
    // cout<<"The value of *(p+2) "<<" is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) "<<" is "<<*(p+3)<<endl;


    //! using & operator with arrays to get the address of the first element of the array.

    cout<<&marks[0]<<endl; //* &marks[0] = p : p is the address of the first element of the array.
    cout<<&marks[1]<<endl; //* &marks[1] = p+1 : p+1 is the address of the second element of the array.
    cout<<&marks[2]<<endl; //* &marks[3] = p+2 : p+1 is the address of the second element of the array.
    cout<<&marks[3]<<endl; //* &marks[4] = p+3 : p+1 is the address of the second element of the array.

    //! Another way to get the address of elements in array
    
    cout<<&p+0<<endl; //* &marks[0] = p : p is the address of the first element of the array.
    cout<<&p+1<<endl; //* &marks[1] = p+1 : p+1 is the address of the second element of the array.
    cout<<&p+2<<endl; //* &marks[3] = p+2 : p+1 is the address of the second element of the array.
    cout<<&p+3<<endl; //* &marks[4] = p+3 : p+1 is the address of the second element of the array.
    
    return 0;
}