#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //variable declaration
    int month,day;

    //each month is assumed to contain 31 days as indicated in rubrics.
    //e.g. 31 for february, 31 for March

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter month: ";
    cin >> month;


    //16/12 to 15/3 ______Winter
    //for each month a different condition has to be made which at the end is joined by OR. 
    if ((day >= 16 && day <= 31 && month == 12 ) || (day >= 1 && day <= 31 && month == 1 ) || (day >= 1 && day <= 31 && month == 2 ) || (day >= 1 && day <= 15 && month == 3 ))
        cout<<"The season is winter\n";
    

    //16/3 to 15/6 ______Spring
    else if ((day >= 16 && day <= 31 && month == 3 ) || (day >= 1 && day <= 31 && month == 4 ) || (day >= 1 && day <= 31 && month == 5 ) || (day >= 1 && day <= 15 && month == 6 ))
        cout<<"The season is spring\n";
    
    
    //16/6 to 15/9 ______Summer
    else if ((day >= 16 && day <= 31 && month == 6 ) || (day >= 1 && day <= 31 && month == 7 ) || (day >= 1 && day <= 31 && month == 8 ) || (day >= 1 && day <= 15 && month == 9 ))
        cout<<"The season is summer\n";
    
    
    //16/9 to 15/12 ______Fall
    else if ((day >= 16 && day <= 31 && month == 9 ) || (day >= 1 && day <= 31 && month == 10 ) || (day >= 1 && day <= 31 && month == 11 ) || (day >= 1 && day <= 15 && month == 12 ))
        cout<<"The season is fall\n";
    
    
    else
        cout<<"Invalid day, month entered";
      
    return 0;
}
