//Olena Spivak 
//Assignment 5
// score_stats.cpp

#include <iostream>//input, output library
using namespace std;//standard namespace
int main()//main function
{
   const int SIZE = 5;//Defines the array size as 5 
   int score[SIZE];//Creates an array to store 5 scores
   for ( int i = 0; i < SIZE; i++) {//loops through all 5 positions
   cout << "Enter score" << i + 1 <<":";//Asks for a score
   cin >> score[i];//Reads the score into the array
   }
   int sum =0;//Initializes the total sum to zero
   int highest = score[0];//Starts the highest score at the first element
   int lowest = score[0];//Starts the lowest score at the first element
   for (int i = 0; i < SIZE; i++){//Loop through all score 
   sum += score [i];//Adds the current score to the sum 
   if (score[i] > highest) {//Check if the score is higher
   highest = score[i];//Updates the highest score
   }
   if (score[i] < lowest) {//Check if the score is lower
   lowest = score [i];//Updates the lowest score
   }
   }
   double average = static_cast<double>(sum)/SIZE;//Calculate the decimal average
   cout << "Scores:";//Prints the scores label
   for (int i = 0; i < SIZE; i++) {//Loop through the array
   cout << score [i] << " ";//prints each score
   }
   cout << endl;// moves to the next line 
   cout << "Sum:" << sum << endl;//print the sum
   cout << "Average:" << average << endl;//prints the average
   cout << "Highest:" << highest << endl;// prints the highest score
   cout << "Lower:" << lowest << endl;//prints the lower score

    return 0;// end the program
}
