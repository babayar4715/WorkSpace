#include <iostream> 
using namespace std;

int main() {
   // Declare and initialize an array of characters with vowels
   char vowel[] {'a', 'b', 'c', 'd', 'e'};
   // Print the first vowel
   cout << "\n The first vowel is " << vowel[0] << endl; 
   // Print the last vowel
   cout << "The last vowel is " << vowel[4] << endl;
   
   // Declare and initialize an array of doubles with high temperatures
   double high_temp[] {90.1, 89.5, 95.6, 96.3};
   // Print the first temperature
   cout << "\n The first temperature is " << high_temp[0] << endl;
   // Update the first temperature
   high_temp[0] = 100.7;
   // Print the updated first temperature
   cout << "The first temperature is now " << high_temp[0] << endl;
   
   // Declare and initialize an array of integers with test scores
   int test_score[] {1, 2, 3, 4, 5};
   // Print each test score
   cout << "\n First score at index 0: " << test_score[0] << endl;
   cout << "Second score at index 1: " << test_score[1] << endl;
   cout << "Third score at index 2: " << test_score[2] << endl;
   cout << "Forth score at index 3: " << test_score[3] << endl;
   cout << "Fifth score at index 4: " << test_score[4] << endl;
   
   // Prompt the user to enter five new test scores
   cout << "\nEnter five scores" << endl;
   // Read and store the new test scores from the user
   cin >> test_score[0];
   cin >> test_score[1];
   cin >> test_score[2];
   cin >> test_score[3];
   cin >> test_score[4];
   
   // Print the updated test scores
   cout << "\nNew updated scores are" << endl;
   cout << "First score in index 0: " << test_score[0] << endl;
   cout << "Second score in index 1: " << test_score[1] << endl;
   cout << "Third score in index 2: " << test_score[2] << endl;
   cout << "Forth score in index 3: " << test_score[3] << endl;
   cout << "Fifth score in index 4: " << test_score[4] << endl;

   return 0;
}
