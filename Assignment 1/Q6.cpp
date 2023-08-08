#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main()
{   
    int a =5 ,b =15 ;
  
    cout<<"value of a = 5 and b = 15 before swapping\n\n";
    a=a+b;//a=5+15=20
    b=a-b;//b=20-5=15
    a=a-b;//a=20-15=5
    cout<<"Value of a after swapping: "<<a<<endl<<"value of b after swapping: "<<b<<endl<<endl<<endl;
    
    cout<<"Now we swap back the values using another method\n\n";
    a=a*b;//1a=5*5=75    
    b=a/b;// b=75/5=15  
    a=a/b;//a=75/15=5  
    cout<<"Value of a after swapping: "<<a<<endl<<"value of b after swapping: "<<b<<endl<<endl<<endl;
    
}

