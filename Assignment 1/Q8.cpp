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

                                                    //OUTPUT
//UPPER PART OF THE ARROW
    cout<<setw(21)<<input<<endl<<setw(23)<<input<<endl<<setw(25)<<input<<endl<<setw(27)<<input<<endl<<setw(29)<<input<<endl
//straight line of the arrow
    <<setw(0)<<input<<input<<input<<input<<input<<input<<input<<input<<input<<input<<endl
//LOWER PART OF THE ARROW
    <<setw(29)<<input<<endl<<setw(27)<<input<<endl<<setw(25)<<input<<endl<<setw(23)<<input<<endl<<setw(21)<<input<<endl;

}
   
