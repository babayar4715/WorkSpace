#include <iostream>
#include <string>

int main() {
    int totalQuestions = 10; // Total number of questions in the test
    int correctAnswers; // Number of correct answers
    double score; // Percentage score
    std::string grade; // Letter grade

    // Get the number of correct answers from the user
    std::cout << "Enter the number of correct answers (out of " << totalQuestions << "): ";
    std::cin >> correctAnswers;

    // Calculate the score as a percentage
    score = (static_cast<double>(correctAnswers) / totalQuestions) * 100;

    // Determine the letter grade based on the score
    if (score >= 90) {
        grade = "A";
    } else if (score >= 80) {
        grade = "B";
    } else if (score >= 70) {
        grade = "C";
    } else if (score >= 60) {
        grade = "D";
    } else {
        grade = "F";
    }

    // Output the results
    std::cout << "Score: " << score << "%" << std::endl;
    std::cout << "Grade: " << grade << std::endl;

    // Output a conclusion based on the grade
    if (grade == "A") {
        std::cout << "Excellent work! You passed with flying colors." << std::endl;
    } else if (grade == "B") {
        std::cout << "Good job! You did well." << std::endl;
    } else if (grade == "C") {
        std::cout << "You passed, but there's room for improvement." << std::endl;
    } else if (grade == "D") {
        std::cout << "You barely passed. Consider studying more." << std::endl;
    } else {
        std::cout << "You failed. Better luck next time." << std::endl;
    }

    return 0;
}
