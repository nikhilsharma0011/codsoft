#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
int num1,num2,choice,result;
cout<<"\n*********** CALCULATOR ***********\n";
// taking input from the user
do{
cout<<"\nENTER FIRST NUMBER : ";
cin>>num1;
cout<<"\nENTER SECOND NUMBER : ";
cin>>num2;
cout<<"\nCHOOSE AN OPERATION YOU WANT TO PERFORM\n";
cout<<"1. ADDITION\n2. SUBTRACTION\n3. MULTIPLICATION\n4. DIVISION\n5. EXIT\n";         //operations that caculator can perform
cout<<"ENTER YOUR CHOICE (1/2/3/4/5) : ";                                               //taking choice from the user for the operation
cin>>choice;
switch (choice){    //using switch case for differnt operations
    case 1 :
    result = num1 + num2;        //addtion
    cout<<num1<<" + "<<num2<<" = "<<result;
    break;

    case 2 :
    result = num1 - num2;         //subtraction
    cout<<num1<<" - "<<num2<<" = "<<result;
    break;

    case 3 :
    result = num1 * num2;         //multiplication
    cout<<num1<<" x "<<num2<<" = "<<result;
    break;

    case 4 :
    result = num1 / num2;         //division
    cout<<num1<<" / "<<num2<<" = "<<result;
    break;

    case 5 :
    cout<<"PROGRAM TERMINATED.....";
    exit(5);

    default :
    cout<<"INVALID CHOICE";
    break;
}
}while(choice !=0);
return 0;
}