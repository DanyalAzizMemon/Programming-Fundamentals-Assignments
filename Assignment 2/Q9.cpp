#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
//variable initialization
float hardness,carbon,tensile;

cout<<"Enter the hardness of steel\n";
cin>>hardness;
cout<<"\nEnter Carbon content of steel\n";
cin>>carbon;
cout<<"\nEnter tensile strength of steel\n";
cin>>tensile;

    //grade 10
    // all conditions
    if (hardness>50 && carbon<0.7 && tensile>5600){
        cout<<"\nThe steel is of grade 10\n";
    }
    
    //grade 9
    // condition 1 and 2
    else if (hardness>50 && carbon<0.7){
        cout<<"\nThe steel is of grade 9\n";
    }
    
    //grade 8
    // condition 2 and 3
    else if (carbon<0.7 && tensile>5600){
        cout<<"\nThe steel is of grade 8\n";
    }
    
    //grade 7
    // condition 1 and 3
    else if (hardness>50 && tensile>5600){
        cout<<"\nThe steel is of grade 7\n";
    }
    
    //grade 6 
    //any one condition 
    else if (hardness>50 || carbon<0.7 || tensile>5600){
        cout<<"\nThe steel is of grade 6\n";
    }
     
     //grade 5
     //no conditions
    else {
        cout<<"\nThe steal is of grade 5";
    }
    
}
