// Olena Spivak
// Assignment 5
// search_count.cpp

#include <iostream>//input, output library
using namespace std;//standard namespace
int main()//main function
{
    const int SIZE = 10;//Defines the array size as 10
    int data[10] = {7, 12, 5, 12, 40, 3, 12, 8, 21, 5};//Creates the given array
    int target;//Declares the number we want to friend
    cout << "Enter a number to search for:";//Asks the user for a number
    cin >> target;// Reads the target number
    int founIndex = -1;//-1 means the number has not been found yet
    int count = 0;//Counts how many times the number appears
    for (int i = 0; i < SIZE; i++) {//Checks every valid array position
    if (data[i] == target) {//check whether the current value matches
    if ( founIndex == -1) {// check whether this is the first match
    founIndex = i;// saves the index of the first match
    }
    count++;//Increases the occurrence count
    }
    }
    if (founIndex != -1) {// Checks whether the target was found
    cout << target << "first found at index" << founIndex << endl;// Print the first index
    cout << target << "appears" << count << "time(s)"<< endl;//Prints the occurrence count
    } else {// runs if no match was found 
    cout << target << "was not found." << endl;//Prints the not found message
    }

    return 0;// ends the program
}
