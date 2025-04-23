#include <iostream> // For input and output

using namespace std;

int main() {
    
    /*
    int num1{}, num2{}; // Declare two integer variables and initialize them to 0
    
    cout << boolalpha;  // This tells C++ to print boolean values as "true"/"false" instead of "1"/"0"

  
    // This section is commented out, but if enabled it would:
    // 1. Ask the user to enter two numbers
    // 2. Compare them using different relational operators and show true/false as results
    
    cout << "Enter 2 integers separated by a space:" << endl;
    cin >> num1 >> num2;  // Read two integers from the user
    
    cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;   // true if num1 is greater than num2
    cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl; // true if num1 is greater or equal to num2
    cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;   // true if num1 is less than num2
    cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl; // true if num1 is less or equal to num2
   

    // Declare two constants for comparison boundaries
    const int lower{10};
    const int upper{20};

    // Ask user to input a number greater than 'lower'
    cout << "\nEnter an integer that is greater than " << lower << " : ";
    cin >> num1;
    // Show if the input number is greater than the lower bound
    cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;

    // Ask user to input a number less than or equal to 'upper'
    cout << "\nEnter an integer that is less than or equal to " << upper << " : ";
    cin >> num1;
    // Show if the input number is less than or equal to the upper bound
    cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;

    cout << endl; // Print an empty line for neat output
     */
     
     int san1{};
     
     cout << boolalpha;
     const int age {18};
     
     cout << "Please write your age (we will declare if your age are acceptable): " << endl;
     cin >> san1; 
     
     cout << san1 << " > " << age << " is " << (san1 > age) << endl;
     
     
     
     
     
    
    
    
    return 0; // Exit the program
}
