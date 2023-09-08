#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    double condition =1, decimal,series=0,sum=0 ;   
    int  num;  // input is taken as int to filter out fractions as required by question, It is rounded off to the nearest whole number.
    cout<<"Input number in the range 1-98\n";
    cin>>num;

    while (num<1 || num>98){    // validation check for range.
        cout<<"Number is not in range\nre-enter\n";
        cin>>num;
    }
    
    while (condition<=num){ //loop is runned till it reaches the number entered starting from 1
       
            if (condition<9) // pattern is same for first 8 numbers as the difference is same i.e 1.1
                decimal = 0.1;
       
            else 
                decimal = 0.01; // the rest of the pattern differs by 0.01
       
        series = ( condition + ((condition +1) * (decimal))); // first term = 1 + (1+1)*0.1 == 1.2
        sum = sum + series;    // it is added to the sum which is required for the question as the final output
            
        condition++; // series is continued as condition is incremented
    }

  cout<<endl<<"The sum of the series till term "<< num<<" is: "<<sum;  


}
