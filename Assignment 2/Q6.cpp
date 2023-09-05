#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //float marks as sometimes marks can be in points
    float A,B;

    cout<<"Enter marks for main subject: ";
    cin>>A;
    
    cout<<"Enter marks for subsidiary subject: ";
    cin>>B;

    //condition 1
    //A greater than equal to 55 and B greater than equal to 45
    if (A>=55 && B>=45){
        cout<<"\nyou have passed\n";
    }

    //condition 2
    else if (A>=45 && B>=55){
        cout<<"\nyou have passed\n";
    }

    //condition 3
    else if (A>=65 && B<45){
        cout<<"\nyou have to reappear for subsidiary subject\n";
    }

    //fail
    else {
        cout<<"\nYou have failed\n";
    }
}
