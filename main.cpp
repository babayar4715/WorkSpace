#include <iostream> 

using namespace std;

int main() {
   char vowel [] {'a','b','c','d','e'};
   cout << "\n The first vowel is "<< vowel[0] << endl; 
   cout << "The last vowel is "<<vowel[4]<<endl;
   
   double high_temp [] {90.1, 89.5, 95.6, 96.3};
   cout << "\n The first temperature is "<< high_temp[0]<<endl;
   high_temp [0]= 100.7;
   cout << "The first temperature is now "<<high_temp[0]<<endl;
   
   int test_score [] {1,2,3,4,5};
   cout <<"\n First score at index 0: "<< test_score[0] <<endl;
   cout <<"Second score at index 1: "<<test_score[1] <<endl;
   cout <<"Third score at index 2: " << test_score[2] << endl;
   cout <<"Forth score at index 3: " << test_score[3] << endl;
   cout <<"Fifth score at index 4: " << test_score[4] << endl;
   
   cout << "\nEnter five scores"<<endl;
   cin >> test_score [0];
   cin >> test_score [1];
   cin >> test_score [2];
   cin >> test_score [3];
   cin >> test_score [4];
   
   
   cout << "\nNew updated scores are"<<endl;
   cout << "First score in index 0: "<< test_score [0]<<endl;
   cout << "Second score in index 1: "<< test_score [1]<<endl;
   cout << "Third score in index 2: "<< test_score [2]<<endl;
   cout << "Forth score in index 3: "<< test_score [3]<<endl;
   cout << "Fifth score in index 4: "<< test_score [4]<<endl;



   
   
   
    return 0;
    }