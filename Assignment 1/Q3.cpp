#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{   


    char input;     //char for taking input in character
    int alphabet;   //int for changing character in int to add 3
    
    cout<<"Enter character : ";
    cin>>input;

    alphabet = input;   //to do arthemitic operations you have to convert char to int    
    alphabet = alphabet + 3;    //adding 3 to the value which was contained by char    
    input = alphabet;   //changing int back to char    

//the output would be 3rd next character the user inputs
// e.g. if A then output is D
    cout<<"Output : " <<input;

}
   
