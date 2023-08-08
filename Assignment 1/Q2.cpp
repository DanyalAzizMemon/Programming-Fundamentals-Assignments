#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
//float variable to support wage in decimals
    float hour_wage, hours, netpay, tax;
    
    cout<<"Enter hourly wage:  ";
    cin>>hour_wage;
    cout<<"Enter number of hours:  ";
    cin>>hours;
    cout<<"Enter witholding tax:  ";
    cin>>tax;
//netpay is equal to hour wage * hours worked * tax
//tax is equal to 25 percent so after deducing it the remaining is 75 percent which is multiplied as 0.75
    netpay= hour_wage * hours * (1-(tax/100));
    cout<<"Net pay :  "<<netpay;
    


}

