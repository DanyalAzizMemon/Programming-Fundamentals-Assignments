#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int num, temp, answer, num1, product =0, digits=0,num2;
    cout<<"Enter a number to find if it is an armstrong number or not : ";
    
    // armstrong number = a number which is equal to the sum of nth power of its digits
    // 371 = 3^3 + 7^3 + 1^3
    
    cin>>num;
    
    //num is used to calculate digits in the input
    //num1 is used to calculate product
    //num2 is used to check if the condition is true
    
    num1 = num;
    num2 = num;
    
    
        while (num>0){      //dividing by 10 till it reaches 0
            num = num/10;
            digits++;    //digits is counted
        }
        
        //to calculate the product
        while (num1>0){
            temp = num1%10;  // num mod 10 would give the last digit of the number
            product = pow(temp,digits) + product; //digits is the power and temp is the base. they are added to the products initial value
            num1=num1/10;  //last number of num is removed
            
        }
        
        if (num2==product){
            cout<<num2<<" is an armstrong number\n";
        }
        
        
        else{
            cout<<num2<<" is not an armstrong number\n";
        }
        
        
}
    

