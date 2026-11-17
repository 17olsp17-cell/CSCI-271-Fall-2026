// Olena Spivak
// Assignment 4
// Program menu_validate.cpp

#include <iostream>// input, output library
using namespace std;// standard namespace


int main()// main function
{
    int choice;// choice variable
    do {// start a loop that runs at least one time 
        cout << "Enter a menu choice (1, 2, or 3):";// ask user to enter a choice 
        cin >> choice;// get the user's choice  
    
        if (choice !=1 && choice !=2 && choice !=3)// check if the choice is invalid 
            cout << "Invalid choice, try again." << endl;// print an error message

  }  while (choice !=1 && choice !=2 && choice !=3);// repeat if the choice is invalid 
    cout << "You selected option" << choice << "." << endl;// print the selected option

    return 0;// end program
}
