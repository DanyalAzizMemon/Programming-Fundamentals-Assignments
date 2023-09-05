#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
   //variable declaration
   double cost;
   int distance;

   cout << "Enter distance you travelled: ";
   cin >> distance;

   //for different distances the prices varies as per formula
   if (distance > 0 && distance <= 100)
   {
      cost = 5.00;
      cout << "Total cost based on distance traveled is: " << setprecision(2) << fixed << cost;
   }
      
   else if (distance > 100 && distance <= 500)
   {
      cost = 8.00;
      cout << "Total cost based on distance traveled is: " << setprecision(2) << fixed << cost;
   }
      
   else if (distance > 500 && distance <= 1000)
   {
      cost = 10.00;
      cout << "Total cost based on distance traveled is: " << setprecision(2) << fixed << cost;
   }
      
   else if (distance > 1000)
   {
      cost = 12.00;
      cout << "Total cost based on distance traveled is: " << setprecision(2) << fixed << cost;
   }
   
}

