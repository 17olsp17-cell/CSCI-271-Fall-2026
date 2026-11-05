// Olena Spivak
//Assignment 7
//binary_search.cpp
#include <iostream> // Allows console input and output
using namespace std; // Allows cin and cout without std::.

int main() { // Starts the program
    const int SIZE = 8; // Sets the number of array elements
    int arr[SIZE] = {11, 22, 33, 44, 55, 66, 77, 88}; // Creates a sorted array
    int target; // Stores the number to search for

    cout << "Enter a number to search for: "; // Asks for a number
    cin >> target; // Reads the user's number

    int low = 0; // Sets the first search index
    int high = SIZE - 1; // Sets the last valid search index
    int foundIndex = -1; // Means the target has not been found

    while (low <= high) { // Searches while the interval is not empty
        int mid = (low + high) / 2; // Calculates the middle index

        if (arr[mid] == target) { // Checks whether the middle value matches
            foundIndex = mid; // Saves the matching index
            break; // Stops the search
        } else if (arr[mid] < target) { // Checks whether the target is larger
            low = mid + 1; // Continues searching in the right half
        } else { // Handles a target smaller than the middle value
            high = mid - 1; // Continues searching in the left half
        } // Ends the comparison
    } // Ends the search loop

    if (foundIndex != -1) { // Checks whether the target was found.
        cout << target << " found at index " << foundIndex << endl; // Prints its index
    } else { // Handles a target that was not found
        cout << target << " not found" << endl; // Prints the not found message
    } // Ends the result check

    return 0; // Ends the program
} // Ends main
