#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num, initial, product = 0, temp;
    cout << "Input a number: ";
    cin >> num;


    initial = num;
    temp = num%10;  //last digit of number is stored in temp
    product = temp;  // temp is stored in product as product cannot be 0 in the beginning
    num = num/10; 

    while ( num > 0)
    {
        temp = num%10; //next value of num
        num = num/10;
        product = product * temp; // product = nextvalue of temp * value stored in temp
    }
    
    cout<<"The product of digits of "<<initial<<" is: "<<product;    
    
}
   


