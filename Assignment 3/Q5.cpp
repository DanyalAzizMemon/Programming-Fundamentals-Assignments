#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int num = 1,positive = 0,odd = 0,even = 0, count = 0, max=0, min = 1000000;  // min is assigned a big value to make a comparision with other values which will be than this
   float average = 0, total = 0;
   
  cout<<"Enter positive integers to find count, maximum, minimum and average\nTo exit press -1\n";
  
    while (num >0)
    {
        cin>>num;
        
        //to exit the code type -1
        if (num ==-1){
            average = total / count;
  
              cout<<"\nNumber of positive integers entered is: "<<positive;
              cout<<"\nNumber of odd integers entered is: "<<odd;
              cout<<"\nNumber of even integers entered is: "<<even;
              cout<<"\nThe maximum value entered is: "<<max;
              cout<<"\nThe minimum value entered is: "<<min;
              cout<<"\nThe average of all entered numbers is: "<<average;
              return 0;
        }
        
    count++;
    //total for average
    total = total +num;
        
        //even
        if (num % 2 == 0){
            even++;
        }
        
        //odd
        else if (num % 2 != 0){
            odd++;
        }
        
        //positive
        if (num > 0){
            positive++;
        }
        //maximum
        if (num>max){
            max = num;
        }
        //minimum
        if (num<min){
            min = num;
        }
        
        
    
        
        
    }
  
}

