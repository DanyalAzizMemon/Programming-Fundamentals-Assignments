#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
//inches is to be taken from user    
    int inches,feet,yards;
    
    cout << " Enter number of inches : ";
    cin >> inches;
    
// 1 yards = 3 feet = 36 inches
//example of 36 inches
    yards = inches / 36; //36/36= 1 yards
    inches = inches % 36;//now we update the remaining inches (inches%36 =0)
    feet = inches /12 ;//0/12= 0
    inches = inches % 12 ;//now we update the remaining inches (inches%12 =0)
    //yards : 1 feet:0 inches:0
    cout <<" yard: "<<yards<<" feet: "<<feet<<" inches: "<<inches;
    
    
    
}
