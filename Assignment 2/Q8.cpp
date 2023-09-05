#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //variable declaration
 int number, num1,num2,num3,num4;
 
 cout <<"Enter 4 digit number\n";
 cin>>number;
 
 //input validation
 //to check as only xxxx 4 digit code is allowed
 if (number>9999 || number<1000){
     cout<<"number not in predefined range\n";
     return 0;
 }
 
 
 else {
    //example number 1234 
    num1 = number % 10;      //num1 = 1234 % 10 = 4
    number = number / 10;    //number = 1234 / 10 = 123
    num2 = number % 10;      //num2 = 123 % 10 = 3
    number = number / 10;    //number = 123 / 10 = 12
    num3 = number % 10;      //num3 = 12 % 10 = 2
    number = number / 10;    //number = 12 / 10 = 1
    num4 = number % 10;      //num4 = 1 % 10 = 1 
    number = number / 10;    //number = 1 /10 = 0
 }
 
 //reversed number = 4321
 cout <<"Number in reverse is : "<<num1<<num2<<num3<<num4;
}
