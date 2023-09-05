#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //variable declaration    
    char lowercase;
    char symbol;
    int leap_year;

    //part a
    cout << "Enter a character to check if it is in lower case: ";
    cin >> lowercase;

    //each variable has a unique ascii code
    //a having the lowest and z having the greatest ascii code
    if (lowercase >= 'a' && lowercase <= 'z')
        cout << lowercase << "  is a lower case alphabet\n";
        
    else
        cout << lowercase << "  is not a lower case alphabet\n";


    //Part b
    //checking for special characters
    cout << "\nEnter something to check if it is a special character: ";
    cin >> symbol;

    // as we do not know the exact symbols and their values we directly exclude numbers and alphabets
    // A to Z + a to z + 0 to 9
    if ((symbol >= 'A' && symbol <= 'z') || (symbol >= '0' && symbol <= '9'))
        cout << symbol << "  is not a special symbol\n";


    else
        cout << symbol << "  is a special symbol\n";


    //part c
    //checking for leap year 
    cout << "\nEnter year to chech if it is a leap year: ";
    cin >> leap_year;


    if (leap_year % 4 == 0)     //for leap year the year should be divisible by 4
    {
        if (leap_year % 100 == 0)     // if it is divisible than we check it for 100 and 400
        {
            if (leap_year % 400 == 0)
                cout << leap_year << " is a leap year";
            else
                cout << leap_year << " is not a leap year";
        }
        else
            cout << leap_year << " is a leap year";
    }
    else
        cout << leap_year << " is not a leap year";
}
