#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    int num1, num2;
    cout<<"Input the first number: ";
    cin>>num1;
    cout<<"Input the second number: ";
    cin>>num2;
    
    while(num1 != num2) // if they are same the GCD would be the same number 
    {
        if(num1 > num2){
            num1 = num1-num2; //e.g num1=25, num2=5 , num1 is then = 20. the loop is repeated till the condition of while is not true 
        }
        else{
            num2 = num2-num1;
        }
    }

    cout << "The Greatest Common Divisor is: " << num1;
}
