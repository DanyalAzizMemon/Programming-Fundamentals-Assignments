#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main()
{   
    int num1,num2,num3,num4,num5 ;
//5 numbers are taken fron the user    
    cout<<"Enter 5 numbers between 0 and 10 \n";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    
//setfill is used to make the pattern
//to make the free space we use setw(num)
//as there * should be equal to the number we input we have to increase setw() by 1......setw(num+1)
   cout <<"Number01:" << setfill('*') << setw(num1 + 1)  << " " << endl; 
   cout <<"Number02:" << setfill('*') << setw(num2 + 1)  << " " << endl; 
   cout <<"Number03:" << setfill('*') << setw(num3 + 1)  << " " << endl; 
   cout <<"Number04:" << setfill('*') << setw(num4 + 1)  << " " << endl; 
   cout <<"Number05:" << setfill('*') << setw(num5 + 1)  << " " << endl; 
  
    return 0; 
}

