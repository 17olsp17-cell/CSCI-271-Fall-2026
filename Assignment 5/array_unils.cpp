// Olena Spivak
// Assignment 5
// array_unils.cpp

#include <iostream>//input, output library
using namespace std;//standard namespace
void printForward(const int arr[], int size) { // Prints the array from first to last
    for (int i = 0; i < size; i++) { // Visits each element from left to right
        cout << arr[i] << " "; // Prints the current element
    }
    cout << endl; // Moves to the next line
}

void printReverse(const int arr[], int size) { // Prints the array from last to first
    for (int i = size - 1; i >= 0; i--) { // Starts at the last valid index
        cout << arr[i] << " "; // Prints the current element
    }
    cout << endl; // Moves to the next line
}

int countAbove(const int arr[], int size, int limit) { // Counts elements greater than limit
    int count = 0; // Initializes the counter to zero

    for (int i = 0; i < size; i++) { // Visits each element in the array
        if (arr[i] > limit) { // Checks if the element is greater than limit
            count++; // Increases the counter by one
        }
    }

    return count; // Returns the number of matching elements
}

int main() { // Starts the main function
    const int SIZE = 6; // Defines the array size as 6
    int values[SIZE] = {14, 3, 27, 9, 50, 21}; // Creates the given array

    cout << "Forward: "; // Prints the forward label
    printForward(values, SIZE); // Calls the function to print forward

    cout << "Reverse: "; // Prints the reverse label
    printReverse(values, SIZE); // Calls the function to print in reverse

    int limit; // Declares the limit entered by the user
    cout << "Count values above: "; // Asks the user for the limit
    cin >> limit; // Reads the limit

    int result = countAbove(values, SIZE, limit); // Counts values above the limit
    cout << "Count: " << result << endl; // Prints the result


    return 0;
}
