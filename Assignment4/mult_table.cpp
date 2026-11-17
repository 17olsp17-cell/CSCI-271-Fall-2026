// Olena Spivak
// Assignment 4 
// Program mult_table.cpp 

#include <iostream> // input, output library
using namespace std; // standard namespace

int main () { // main function
    int number;// number variable 
    cout << "Enter number:";// ask the user to enter a number
    cin >> number;// get th user's number 
    
    for (int i = 1; i <=10; i++) {//repeat the loop from 1 to 10
        cout << number << " x " << i << "=" << number * i << endl;// print the multiplication result
    }


    return 0;// end program
}
