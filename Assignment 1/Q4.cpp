#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int years,days,months,input;    //input is the value we take from user

//to understand we take the example of 365    
    cout<<"Enter days:  ";
    cin>>input; //365 

    years = input/365; //365/365 = 1 which gives us year
    input = input - (365*years); //365 - (365 * 1) = 0
    months = input / 30;    // 0/365 = 0

    input = input - (30*months); //0-0 = 0
    days = input;
    
    cout<<years<<" year:  "<<months<<"  months:   "<<days<< " days:   ";    //final values = 1 year 0 months 0 days    

    

}

