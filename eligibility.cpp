#include <iostream> //input,output library
using namespace std; //standard namespace

// Olena Spivak
//Assignment 3

int main() //main function
{
    int age; // age variable
    int isMember; // member variable 
    
    cout << "Enter your age:"; // ask age
    cin >> age; // get age 
    
    cout << "Age you a member? (1 = yes, 0 = no):"; // ask membership
    cin >> isMember; // get membership
    
    if ((age >=60) || (age >= 18 && isMember == 1)) { // check eligibility
        cout << "You quality for the discount."; // print qualified
    }
    else { // otherwise
        cout << "You do not quality for the discount."; //print not qualified
    }
     return 0;  //end program  
}
