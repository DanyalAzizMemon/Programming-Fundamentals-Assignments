#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{
 char  input1, input2; 

cout<<"Enter 2 primary colors \nfor red type 'r'\nfor blue type 'b'\nfor yellow type 'y'\n";
cin>>input1>>input2;

//checking if values are correct
//the code will go to else statement and output "Input value not correct" if the input is other than b,r,y.
    if ((input1 == 'r' || input1 =='b' || input1=='y') && (input2 == 'r' || input2 =='b' || input2=='y') ){
        
        //blue and red makes purple
        if ((input1 == 'b' || input1 == 'r') && (input2 =='r' || input2 =='b')){
            cout<<"mixing blue and red, you get the color purple\n";
        }
        
        //yellow and red makes orange
        else if ((input1 == 'r' || input1 == 'y') && (input2 =='r' || input2 =='y')){
            cout<<"mixing yellow and red, you get the color orange\n";
            
        }
        
        //yellow and blue makes green
        else if ((input1 == 'b' || input1 == 'y') && (input2 =='y' || input2 =='b')) {
            cout<<"mixing blue and yellow, you get the color green\n";
        }
    }
 
    else {
        
        cout<<"Input value not correct!\n";
        
    }
    
    //question is repeated using switch statements
    cout<<"\nSame question is repeated using switch statements\n";
    
    //nested switch is used
    //first input is checked first
    //if value is incorrect it would go to default
    // if first value is correct than it goes to case which is followed by another switch for second input
    //the both inputs than give out a color as output
    switch (input1){
        case 'r':
        
        switch (input2){
            
            
            case 'b':
            cout<<"\nmixing blue and red, you get the color purple\n";
            break;
            
            case 'y':
            cout<<"\nmixing yellow and red, you get the color orange\n";
            break; 
            
            default :
            cout<<"\nInput value not correct!\n";
            break;
        }
        break;
        
        
        
        case 'b':
        
        switch (input2){
            
            case 'r':
            cout<<"\nmixing blue and red, you get the color purple\n";
            break;
            
            case 'y':
            cout<<"\nmixing blue and yellow, you get the color green\n";
            break;
            
            default :
            cout<<"\nInput value not correct!\n";
            break;
        }
        break;
        
        
        
        case 'y':
        
        switch (input2){
            
            case 'r':
            cout<<"\nmixing yellow and red, you get the color orange\n";
            break;
            
            case 'b':
            cout<<"\nmixing blue and yellow, you get the color green\n";
            break;
            
            default :
            cout<<"\nInput value not correct!\n";
            break;
        }
        break;
        
        
        
        default :
        cout<<"\nInput value not correct!\n";
        break;
        
        
        }
    
}

