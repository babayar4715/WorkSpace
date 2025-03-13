/*#include <iostream>
#include <string>

int main() {
    int totalQuestions = 10; // Total number of questions in the test
    int correctAnswers; // Number of correct answers
    double score; // Percentage score
    std::string grade; // Letter grade
    std::string term;
    std::string your_term;
    std::string {F , W, S};

    // Get the number of correct answers from the user
    std::cout << "Here you can calculate your grade"<<std::endl;
    std::cout << "Choose your term: \n Fall term {F} \n Winter term {W} \n Spring term {S}" << std::endl;
    std::cin >> term;
    if (term = F) {
        your_term = "Fall term";
    }else if (term = W){
        your_term = "Winter term";
    }else if (term = S) {
        your_term = "Spring term";
    }else {
        your_term = "You did not choose term correct! \n Please write it with big deal (as: W)"
    }
    
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
    std::cout << "Term: "<< your_term<<std::endl;
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
**********************************/
#include <iostream>
#include <string>
#include <vector>

int main() {
    int totalQuestions = 10; // Total number of questions in the test
    double score; // Average score
    std::string grade; // Letter grade
    std::string term;
    std::string your_term;
    std::vector<std::string> classes = {"Math", "Physics", "Chemistry", "English", "Computer Science"};
    std::vector<double> scores(5); // Scores for each class as percentages
    double totalScore = 0; // Total score for calculating the average

    // Get the term from the user
    std::cout << "Here you can calculate your grade" << std::endl;
    std::cout << "Choose your term: \n Fall term {F} \n Winter term {W} \n Spring term {S}" << std::endl;
    std::cin >> term;

    // Determine the term based on user input
    if (term == "F") {
        your_term = "Fall term";
    } else if (term == "W") {
        your_term = "Winter term";
    } else if (term == "S") {
        your_term = "Spring term";
    } else {
        your_term = "You did not choose term correctly! \n Please write it with a capital letter (as: W)";
    }

    // Get the scores for each class from the user
    std::cout << "Enter your scores as percentages (0-100) for the following classes:" << std::endl;
    for (int i = 0; i < classes.size(); ++i) {
        std::cout << classes[i] << ": ";
        std::cin >> scores[i];
        totalScore += scores[i];
    }

    // Calculate the average score
    double averageScore = totalScore / classes.size();

    // Determine the letter grade based on the average score
    if (averageScore >= 90) {
        grade = "A";
    } else if (averageScore >= 80) {
        grade = "B";
    } else if (averageScore >= 70) {
        grade = "C";
    } else if (averageScore >= 60) {
        grade = "D";
    } else {
        grade = "F";
    }

    // Output the results
    std::cout << "Term: " << your_term << std::endl;
    std::cout << "Average Score: " << averageScore << "%" << std::endl;
    std::cout << "Grade: " << grade << std::endl;

    // Output a conclusion based on the average score
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
