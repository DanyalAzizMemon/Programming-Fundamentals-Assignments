#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //flag to check if condition is true or not
    //count is number we will divide to check if it is prime or not
    int num, count = 2, flag = 0;
    
    cout<<"Enter number to check if it is a prime number\n";
    cin>>num;
    
    while (count <= num/2 ){    // as the highest possible divisor would half of the orignal number 
        if (num %count == 0){  //condition for each number would be checked.
            flag=1;
            cout<<num<<" is not prime number\n";
            return 0; 
            
        }
    count ++; //count is incremented to check again
        
    }
    
    if (flag == 0 ){
        cout<<num<<" is prime number\n";
    }
    
}
   


