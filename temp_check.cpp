#include <iostream> //input,output library
using namespace std; //standard namespace
// Olena Spivak
// Assignment 3

int main() //main function
{
    int temperature; //temperature variable 
    
    cout << "Enter the temperature (F):"; //ask temperature
    cin >> temperature; //get temperature
    
    if (temperature < 32) { //check freezing 
        cout << "That's Freezing."; //print freezing 
    }
    else if (temperature <= 59) {  //check cold 
        cout << "That's Cold.";  //print cold 
    }
    else if (temperature <=75) {  //check mild
        cout << "That's Mild.";  //print mild
    }
    else {  // otherwise
        cout << "That's Hot.";  //print hot 
    }
     return 0;  //end program  
}
