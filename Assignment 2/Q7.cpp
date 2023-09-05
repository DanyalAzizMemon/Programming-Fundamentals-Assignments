#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
//variable declaration    
int age;
char gender;
char city;
char health;

cout<<"Welcome to insurance company!\nEnter your age\n";    
cin>>age;
cout<<"Enter your gender\npress 'm' for male\npress 'f' for female\n";
cin>>gender;
cout<<"Do you live in a city\npress 'y' for yes\npress 'n' for no\n";
cin>>city;
//having medical conditions == bad health
cout<<"Do you have any medical conditions?\nIf yes type 'y'\nIf no type 'n'\n";
cin>>health;

    if (health =='n' && (age>=25 && age <=35) && city =='y' && gender =='m'){
        cout<<"you will recieve a premium of Rs.4 per thousand\nPolicy amount can not exceed Rs. 200,000\n";
    }
    
    else if (health =='n' && (age>=25 && age <=35) && city =='y' && gender =='f'){
        cout<<"you will recieve a premium of Rs.3 per thousand\nPolicy amount can not exceed Rs. 100,000\n";
    }
    
    else if (health =='y' && (age>=25 && age <=35) && city =='n' && gender =='m'){
        cout<<"you will recieve a premium of Rs.6 per thousand\nPolicy amount can not exceed Rs. 10,000\n";
    }
    
    else {
        cout<<"The person cannot be insured\n";
    }
}
