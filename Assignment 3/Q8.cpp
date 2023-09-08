#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    //declaration and initialization
    int count = 1, terms,base, x,y,answer;
    
    //we take the base and termss from the user
    cout<<"Input the number of terms N: ";
    cin>>terms;
    cout<<"Input the base b: ";
    cin>>base;

        while (count<=terms){ //count is the numbers which will run from 1 and get equal to terms
            x=count%base;  
            y=count/base;
            answer = y * 10 + x; // this will change according to the value of count,x,y
            cout<<answer<<" "; 
            count++;  //count is incremented
        }
}

