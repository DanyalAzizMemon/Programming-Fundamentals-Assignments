#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
//variables declaration    
 int num1,num2,num3,num4,largest = -10000;

//First part of the program we take 3 inputs and output the greatest number 
 cout<<"Enter number 1: ";
 cin>>num1;
 
 cout<<"Enter number 2 :";
 cin>>num2;
 
 cout<<"Enter number 3 :";
 cin>>num3;

//we check each number seperately and the bigger number is assigned to the largest
	//(condition) ? (if true) : (if false)
    (num1>largest) ? largest=num1 : largest=largest;
    (num2>largest) ? largest=num2 : largest=largest;
    (num3>largest) ? largest=num3 : largest=largest; 
 
 
cout<<"\nThe largest number you entered is : "<<largest;

//the same code is repeated to input 4 numbers 
cout<<"\n\n\nNow this program will run again for 4 numbers\n\n\n";

 largest = -10000;

 cout<<"Enter number 1: ";
 cin>>num1;
 
 cout<<"Enter number 2: ";
 cin>>num2;
 
 cout<<"Enter number 3: ";
 cin>>num3;
 
 cout<<"Enter number 4: ";
 cin>>num4;

    (num1>largest) ? largest=num1 : largest=largest;
    (num2>largest) ? largest=num2 : largest=largest;
    (num3>largest) ? largest=num3 : largest=largest;
    (num4>largest) ? largest=num4 : largest=largest;

cout<<"\nThe largest number you entered is : "<<largest;
}

