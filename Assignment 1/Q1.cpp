#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
//i is the value we take from user
//u and p are predefined

    float answer,u=1.234,p=3.334,i;

    cout<<"Enter value of i"<<endl;
    cin>>i;
//formula
answer = sqrt((u*(i*sqrt(i)))*(i*i-1))/(sqrt(p*i-2) + sqrt(p*i-1));
cout<<"The answer is equal to:  "<<answer;
}

