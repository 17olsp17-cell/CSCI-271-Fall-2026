//Olena Spivak
//Assignment 7
//grade_tracker.cpp
#include <iostream> // Allows console input and output.
#include <vector> // Allows the use of vectors.
using namespace std; // Allows standard names without std::.

int main() { // Starts the program.
    vector<int> grades; // Creates an empty vector of integer grades.
    int numberOfGrades; // Stores how many grades the user will enter.

    cout << "How many grades? "; // Asks for the number of grades.
    cin >> numberOfGrades; // Reads the number of grades.

    if (numberOfGrades <= 0) { // Checks that the count is positive.
        cout << "Please enter at least one grade." << endl; // Explains the requirement.
        return 1; // Stops before accessing an empty vector.
    } // Ends the count check.

    for (int i = 0; i < numberOfGrades; i++) { // Repeats for each requested grade.
        int grade; // Stores the next grade.
        cout << "Enter grade " << i + 1 << ": "; // Displays the grade number.
        cin >> grade; // Reads the grade.
        grades.push_back(grade); // Adds the grade to the vector.
    } // Ends the input loop.

    double sum = 0.0; // Stores the sum of all grades.
    int highest = grades[0]; // Starts with the first grade as the highest.

    cout << "Grades: "; // Labels the list of grades.

    for (int g : grades) { // Visits each grade using a range-based loop.
        cout << g << " "; // Prints the current grade on the same line.
        sum += g; // Adds the current grade to the sum.

        if (g > highest) { // Checks whether this grade is higher.
            highest = g; // Updates the highest grade.
        } // Ends the highest-grade check.
    } // Ends the range-based loop.

    cout << endl; // Moves to the next line.
    double average = sum / static_cast<double>(grades.size()); // Calculates a double average.

    cout << "Count: " << grades.size() << endl; // Prints the number of grades.
    cout << "Average: " << average << endl; // Prints the average.
    cout << "Highest: " << highest << endl; // Prints the highest grade.

    return 0; // Ends the program successfully.
} // Ends main.
