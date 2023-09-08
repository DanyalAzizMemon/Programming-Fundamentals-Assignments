#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int term_1 = 0, term_2 = 1, next = 0, num, count=0;
    cout<<"Input number of terms to display: ";
    cin>>num;
    cout<<"\nHere is the Fibonacci series upto to "<<num<<" terms:\n";
    
    while (count < num){
        count++;  
        cout<<next<< " "; // first number in the series is printed i.e. 0
        term_1 = term_2;  // 1 is assigned to term 1
        term_2 = next;    // 0 is assigned to next
        next = term_2 + term_1; // next value would give : 1 + 0 = 1 .
    }
   
}
   


