#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    int n, t=0, var=0;
    
    cout<<"Enter a number to check if it is triangular : ";
    cin>>n;
        
        while (n > t)  //as we do not the exact series of triangular numbers. we would make the series ourselves from var=0;the triangular number would be less than n.
        {   
            t = (var) * (var+1) / 2; // formula for triangular numbers starting from var==0
            var++;  //incrementaion     
        }
        
        if (t == n)
            cout<<n<<" is triangular\n";
        
        else 
            cout<<n<<" is not a triangular\n";
        
    
}
    

