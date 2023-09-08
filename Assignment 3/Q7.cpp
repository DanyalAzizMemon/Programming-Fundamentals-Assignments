#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num, first, last, initial;
    
    cout<<"Input any number: ";
    cin>>num;

    last = num %10;   //e.g. 154 % 10 = 4
    initial = num;

    while(num>10){ // this loop will run till we reach the 1st number
        first = num;   
        first = first % 10;  //value is assigned to first
        num = num / 10;     //last digit of num is removed 
    }

    first = num;

    cout<<"\nThe first digit of "<<initial<<" is: "<<first;
    cout<<"\nThe last digit of "<<initial<<" is: "<<last;
    cout<<"\nThe sum of first and last digit of "<<initial<<" is: "<<first+last;

   
}
   


