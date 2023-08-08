#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int amount,fivehundred, hundred,fifty,twenty,ten,five,one;
//no check implemented as if statements not allowed    
    cout << " Enter amount between Rs.100 and Rs.10000"<<endl;
    cin >> amount;
//we take the example of Rs.1234
    fivehundred = amount / 500;  //1234/500 =2
    amount = amount%500;         //1234 MOD 500 = 234 ......> remaining amount
    hundred = amount /100;       //234/100 =2
    amount = amount%100;         //234 MOD 100 = 34 ......> remaining amount
    fifty = amount /50;          //34/50 =0
    amount = amount %50;         //34 MOD 50 = 34 ......> remaining amount
    twenty = amount /20;         //34/20  = 1
    amount = amount %20;         //34 MOD 20 = 14 ......> remaining amount
    ten = amount /10;            //14/10  = 1
    amount = amount %10;         //14 MOD 10 = 4 ......> remaining amount
    five = amount /5;            //4/5  = 0
    amount = amount %5;          //4 MOD 5 = 4 ......> remaining amount 
    one = amount /1;             //4/1 =4
    amount = amount %1;          //4 MOD 1 = 0.......> remaining amount

cout<<"currency note 500:  "<<fivehundred<<endl;
cout<<"currency note 100:  "<<hundred<<endl;
cout<<"currency note 50:  "<<fifty<<endl;
cout<<"currency note 20:  "<<twenty<<endl;
cout<<"currency note 10:  "<<ten<<endl;
cout<<"currency note 5:  "<<five<<endl;
cout<<"currency note 1:  "<<one<<endl;
 

    
    
}
