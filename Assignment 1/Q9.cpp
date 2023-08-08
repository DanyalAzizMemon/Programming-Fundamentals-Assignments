#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{   
//input is the data we take from the user for the pattern
    string input;
    cout<<"Enter String"<<endl;
    getline(cin,input);

//to balance the shape we increase the setw() by 1 and decrease the second setw()by 2
//this shape can be made using any set values/symbols as input
    cout<<setw(15)<<input<<setw(15)<<input<<endl;
    cout<<setw(16)<<input<<setw(13)<<input<<endl;
    cout<<setw(17)<<input<<setw(11)<<input<<endl;
    cout<<setw(18)<<input<<setw(9)<<input<<endl;
    cout<<setw(19)<<input<<setw(7)<<input<<endl;
//the next setw() is increased by 2 to as we are not allowed to give space by " " in this question 
    cout<<setw(21)<<input<<input<<endl;
//now the first setw() is decreased by 1 and the second setw() is increased by 2
    cout<<setw(19)<<input<<setw(7)<<input<<endl;
    cout<<setw(18)<<input<<setw(9)<<input<<endl;
    cout<<setw(17)<<input<<setw(11)<<input<<endl;
    cout<<setw(16)<<input<<setw(13)<<input<<endl;
    cout<<setw(15)<<input<<setw(15)<<input<<endl;
    
}

