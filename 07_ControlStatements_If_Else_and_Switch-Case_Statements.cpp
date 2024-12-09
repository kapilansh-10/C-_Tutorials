#include<iostream>
using namespace std;

int main(){
    
    //! if statement : if the condition is true then the statement inside the if block will be executed !//

    //! else if statement : if the condition is false then the statement inside the else if block will be executed !//

    //! else statement : if the condition is false then the statennt inside the else block will be executed !//


    //* Selection control statements : if else and switch case statements *//

    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age; //
    if(age<18){ //* if the age is less than 18 then the following statement will be executed
        // cout<<"You cannot come to my party";
    }
    else if(age==18) { //* if the age is equal to 18 then the following statement will be executed
        // cout<<"You are a kid and you will get a kid pass to the party";
    }
    else{ //* if the age is greater than or equal to 18 then the following statement will be executed
        // cout<<"You can come to my party";
    }


    //! Switch case statement : it is used to select one of the many blocks of code to be executed !//

    switch (age)
    {
    case 18: //* if the age is equal to 18 then the following statement will be executed
        cout<<"You are 18 years old"<<endl;
        break; //* break statement is used to terminate the switch case statement
    case 22:
        cout<<"You are 22 years old"<<endl;
        break;
    case 2:
        cout<<"You are 2 years old"<<endl;
        break;
    
    default:
        cout<<"No special cases"<<endl;
        break;
    }

    return 0;
}